#!/bin/bash

if [[ -f "CW1PTP${1}.c" ]]
then
	gcc "CW1PTP${1}.c" -o "CW1PTP${1}.o"
	./"CW1PTP${1}.o"
elif [[ -f "CW1PTP${1}.bat" ]]
then
	echo "This is batch dude."
elif [[ -f "CW1PTP${1}.sh" ]]
then
	./"CW1PTP${1}.sh"
fi
