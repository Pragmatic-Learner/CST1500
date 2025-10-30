#!/bin/bash

# First parameter is a  path.  Create path if it does not exist
path="${1}"
# ## Replace ~ for $HOME
if [[ "${path:0:2}" == "~/" ]]
then
	path="${HOME}${path}"
fi

if [[ ! -d "${path}" ]]
then
	mkdir -p "${path}"
	echo "Path, ${path}, was missing so it was created"
fi

# Second parameter is an int, between 0 exlusive, and 20 inclusive
x="${2}"
if [ "${x}" -le 0 ] || [ "${x}" -gt 20 ]
then
	echo "Integer number x is outside of range 0 to 20, 20 inclusive, 0 exclusive!!"
	read -p "Will you proceed or terminate the program (X to terminate, anything else to proceed) ? " proceedTerminate
	[[ "${proceedTerminate}" == "X" ]] && exit 1
fi

# Third parameter is an int, between 0 exlusive, and 20 inclusive
y="${3}"
if [ "${y}" -le 0 ] || [ "${y}" -gt 20 ]
then
	echo "Integer number y is outside of range 0 to 20, 20 inclusive, 0 exclusive!!"
	read -p "Will you proceed or terminate the program (X to terminate, anything else to proceed) ? " proceedTerminate
	[[ "${proceedTerminate}" == "X" ]] && exit 1
fi

# Loop X time, each time creating a folder $i
for (( i=1; i<=x; i++ ))
do
	mkdir "${path}/${i}"

	# Loop Y times for each X loop, to create Y txt files inside folder $i
	for (( j=1; j<=y; j++ ))
	do
		touch "${path}/${i}/${j}.txt"
	done
done
