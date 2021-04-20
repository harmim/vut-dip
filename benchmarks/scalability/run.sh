#!/usr/bin/env bash

LOG_FILE="$( pwd )/log"

function log
{
	echo "$1: $2" >> "${LOG_FILE}"
}

function clean
{
	rm -rf infer-out *.o infer-atomicity-out atomic-sets
}

if [[ $# -eq 0 ]]; then
	exit 1
else
	cd "$1"
fi

> "${LOG_FILE}"

for f in *.c; do
	[[ -f "$f" ]] || break

	clean
	OUT=$( cat "$f" | wc -l )

	infer capture -- gcc -c "$f"
	if [[ $? -ne 0 ]]; then
		log "$f" "${OUT}   CAPTURE FAILED"
		continue
	fi

	START=$( date "+%s.%N" )
	timeout 600 infer analyze --atomic-sequences-only
	# timeout 600 infer analyze --atomic-sets-only --atomic-sets-widen-limit 2
	c=$?
	END=$( date "+%s.%N" )
	if [[ $c -ne 0 ]]; then
		if [[ $c -eq 124 ]]; then
			log "$f" "${OUT}   PHASE 1 TIMEOUT"
		else
			log "$f" "${OUT}   PHASE 1 FAILED"
		fi
		continue
	fi
	PHASE_1_TIME=$( echo "${END} - ${START}" | bc -l )
	OUT="${OUT}   ${PHASE_1_TIME}"

	START=$( date "+%s.%N" )
	timeout 600 infer analyze --atomicity-violations-only
	# timeout 600 infer analyze --atomicity-violations-only --atomicity-violations-widen-limit 2
	c=$?
	END=$( date "+%s.%N" )
	if [[ $c -ne 0 ]]; then
		if [[ $c -eq 124 ]]; then
			log "$f" "${OUT}   PHASE 2 TIMEOUT"
		else
			log "$f" "${OUT}   PHASE 2 FAILED"
		fi
		continue
	fi
	PHASE_2_TIME=$( echo "${END} - ${START}" | bc -l )
	OUT="${OUT}   ${PHASE_2_TIME}"

	log "$f" "${OUT}"
done

clean
