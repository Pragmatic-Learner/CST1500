#!/bin/bash

until [ -d "${dirPath}" ] || [ "${RunProgram}" == "Exit" ]
do
	read -p "Enter directory path: " dirPath
	
	if [[ "${dirPath:0:1}" == "~" ]]
	then
		dirPath="${HOME}${dirPath:1}"
	fi
	
	if [[ ! -d "${dirPath}" ]]
	then
		echo "Invalid Path!!"
		read -p "Do you want to just exit (type 'Exit' to exit, or anything else to try again): " RunProgram
		continue
	fi
	
	mkdir "${dirPath}/a"
	mkdir "${dirPath}/b"
	mkdir "${dirPath}/c"
	
	# Task 1
	read -p "Enter your MDX username: " userName
	echo "${userName}" > "${dirPath}/a/userName.txt"
	
	# Task 2
	read -p "Enter your favorite movie: " myFavoriteMovie
	echo "${myFavoriteMovie}" > "${dirPath}/b/myFavMovie.txt"
	
	# Task 3
	mv "${dirPath}/a" "${dirPath}/b" "${dirPath}/c"
done
