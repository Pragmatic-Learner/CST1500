#!/bin/bash
path="${1}"

[[ "${path:1:1}" == "~" ]] && path="${HOME}${path:1}"
[[ ! -d "${path}" ]] && mkdir "${path}" #Should have an echo to inform user of directory creating

x="${2}"
if [[ "${x}" -le 0 ]] && [[ "${x}" -gt 20 ]]
then
	echo "Integer number x is outside of range!!"
	read -p "Will you proceed or terminate the program (X to terminate, anything else to proceed) ? " proceedTerminate
	[[ "${proceedTerminate}" == "X" ]] && exit
fi

y="${3}"
if [[ "${y}" -le 0 ]] && [[ "${y}" -gt 20 ]]
then
	echo "Integer number y is outside of range!!"
	read -p "Will you proceed or terminate the program (X to terminate, anything else to proceed) ? " proceedTerminate
	[[ "${proceedTerminate}" == "X" ]] && exit
fi

for (( i=1; i<=x; i++ ))
do
	mkdir "${path}/${i}"
	for (( j=1; j<=y; j++ ))
	do
		touch "${path}/${i}/${j}"
	done
done
