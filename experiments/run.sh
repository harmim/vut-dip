#!/usr/bin/env bash

CYAN='\033[0;36m'
NC='\033[0m'

function clean
{
	rm -rf infer-out/ *.o *.class *.ast.sh
	echo
}

function failed
{
	printf "\n${CYAN}${1}${NC}\n"
	clean
}

base_dir=$(pwd)

for dir in */; do
	cd "${base_dir}/${dir}"

	file=$(find . -type f \( -name "*.c" -o -name "*.cpp" -o -name "*.java" \) -maxdepth 1 | head -n 1)
	if [[ "${file}" || -f "Makefile" ]]; then
		if [[ -f "Makefile" ]]; then
			infer capture -- make
		elif [[ "${file}" == *.c || "${file}" == *.cpp ]]; then
			infer capture -- gcc -c "${file}"
		elif [[ "${file}" == *.java ]]; then
			infer capture -- javac "${file}"
		fi
		if [[ "${?}" -ne 0 ]]; then
			failed "In '${dir}' 'infer caputre' failed."
			continue
		fi

		atomic_sets_params=""
		if [[ -f "atomic-sets-params" ]]; then
			atomic_sets_params=$(head -n 1 atomic-sets-params)
		fi

		atomic_sets=0
		if [[ -f "atomic-sets" ]]; then
			infer analyze --atomic-sets-only ${atomic_sets_params}
			if [[ "${?}" -ne 0 ]]; then
				failed "In '${dir}' 'infer analyze --atomic-sets-only ${atomic_sets_params}' failed."
				continue
			fi
			atomic_sets=1

			diff=$(diff -q infer-out/atomic-sets atomic-sets)
			if [[ "${diff}" ]]; then
				echo
				diff -u infer-out/atomic-sets atomic-sets
				failed "In '${dir}' 'infer-out/atomic-sets' and 'atomic-sets' differs."
			fi
		fi

		if [[ -f "report.txt" ]]; then
			if [[ "${atomic_sets}" -eq 0 ]]; then
				infer analyze --atomic-sets-only ${atomic_sets_params}
				if [[ "${?}" -ne 0 ]]; then
					failed "In '${dir}' 'infer analyze --atomic-sets-only ${atomic_sets_params}' failed."
					continue
				fi
				atomic_sets=1
			fi

			atomicity_violations_params=""
			if [[ -f "atomic-sets-params" ]]; then
				atomicity_violations_params=$(head -n 1 atomicity-violations-params)
			fi

			infer analyze --atomicity-violations-only ${atomicity_violations_params}
			if [[ "${?}" -ne 0 ]]; then
				failed "In '${dir}' 'infer analyze --atomicity-violations-only ${atomicity_violations_params}' failed."
				continue
			fi

			diff=$(diff -q infer-out/report.txt report.txt)
			if [[ "${diff}" ]]; then
				echo
				diff -u infer-out/report.txt report.txt
				failed "In '${dir}' 'infer-out/report.txt' and 'report.txt' differs."
			fi
		fi

		clean
	fi
done
