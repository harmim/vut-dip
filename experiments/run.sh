#!/usr/bin/env bash

# Author: Dominik Harmim <iharmim@fit.vut.cz>

CYAN='\033[0;36m'
NC='\033[0m'

function clean { rm -rf infer-out *.o *.class *.ast.sh atomic-sets; }
function fail { printf "\n${CYAN}${1}${NC}\n"; clean; exit 1; }
function jsort { jq -S --argfile x "${1}" -n '$x | (.. | arrays) |= sort'; }

base_dir=$(pwd)

for dir in $(dirname "${0}")/*/; do
  cd "${base_dir}/${dir}"

  file=$(find . -maxdepth 1 -type f \
    \( -name '*.c' -o -name '*.cpp' -o -name '*.java' \) | head -n 1)
  if [[ ! "${file}" && ! -f Makefile ]]; then continue; fi

  printf "${CYAN}---------- Analysing '${dir}' ----------${NC}\n\n"

  if [[ -f Makefile ]]; then
    infer capture -- make
  elif [[ "${file}" == *.c || "${file}" == *.cpp ]]; then
    infer capture -- gcc -c "${file}"
  elif [[ "${file}" == *.java ]]; then
    infer capture -- javac "${file}"
  fi
  if [[ ${?} -ne 0 ]]; then
    fail "In '${dir}', 'infer caputre' failed."
  fi

  atomic_sets_params=''
  atomic_sets_params_str=''
  if [[ -f atomic-sets-params ]]; then
    atomic_sets_params=$(head -n 1 atomic-sets-params)
    if [[ "${atomic_sets_params}" ]]; then
      atomic_sets_params_str=" ${atomic_sets_params}"
    fi
  fi

  atomic_sets=0
  if [[ -f atomic-sets-exp ]]; then
    infer analyze --atomic-sets-only ${atomic_sets_params}
    if [[ ${?} -ne 0 ]]; then
      fail "In '${dir}', 'infer analyze --atomic-sets-only\
        ${atomic_sets_params_str}' failed."
    fi
    atomic_sets=1

    diff=$(diff -q <(sort atomic-sets) <(sort atomic-sets-exp))
    if [[ "${diff}" ]]; then
      echo; diff -u <(sort atomic-sets) <(sort atomic-sets-exp)
      fail "In '${dir}', 'atomic-sets' and 'atomic-sets-exp' differ."
    fi
  fi

  if [[ -f report.json ]]; then
    if [[ ${atomic_sets} -eq 0 ]]; then
      infer analyze --atomic-sets-only ${atomic_sets_params}
      if [[ ${?} -ne 0 ]]; then
        fail "In '${dir}', 'infer analyze --atomic-sets-only\
          ${atomic_sets_params_str}' failed."
      fi
      atomic_sets=1
    fi

    atomicity_violations_params=''
    atomicity_violations_params_str=''
    if [[ -f atomicity-violations-params ]]; then
      atomicity_violations_params=$(head -n 1 atomicity-violations-params)
      if [[ "${atomicity_violations_params}" ]]; then
        atomicity_violations_params_str=" ${atomicity_violations_params}"
      fi
    fi

    infer analyze --atomicity-violations-only ${atomicity_violations_params}
    if [[ ${?} -ne 0 ]]; then
      fail "In '${dir}', 'infer analyze --atomicity-violations-only\
        ${atomicity_violations_params_str}' failed."
    fi

    diff=$(diff -q <(jsort infer-out/report.json) <(jsort report.json))
    if [[ "${diff}" ]]; then
      echo; diff -u <(jsort infer-out/report.json) <(jsort report.json)
      fail "In '${dir}', 'infer-out/report.json' and 'report.json' differ."
    fi
  fi

  clean; echo
done
