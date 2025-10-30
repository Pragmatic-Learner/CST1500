#!/bin/bash
until [ -d "${dirPath}" ] || [ "${RunProgram}" == "Exit" ]
do

	# Get directory path
	read -p "Enter directory path: " dirPath
	
	# In bash `~` is often used to refer to ${HOME} or /home/${USER}.
	# As such, if the first letter in dirPath is `~`, replace it with string for ${HOME}
	if [[ "${dirPath:0:1}" == "~" ]]
	then
		dirPath="${HOME}${dirPath:1}" #concatenate $HOME, with dirPath[1] to dirPath[END OF ARRAY]
	fi
	
	# Check if the directory input is incorrect, and if so, skip all other code and repeat loop
	if [[ ! -d "${dirPath}" ]]
	then
		echo "Invalid Path!!"
		read -p "Do you want to just exit (type 'Exit' to exit, or anything else to try again): " RunProgram
		continue
	fi
	
	# Create subdirectories a, b, and c, and exit if any returns error
	mkdir "${dirPath}/a"
	if [ $? -ne 0 ]
	then
		echo "Error: Failed to create directory ${dirPath}/a"
		exit 1
	fi
	mkdir "${dirPath}/b"
		if [ $? -ne 0 ]
	then
		echo "Error: Failed to create directory ${dirPath}/a"
		exit 1
	fi
	mkdir "${dirPath}/c"
		if [ $? -ne 0 ]
	then
		echo "Error: Failed to create directory ${dirPath}/a"
		exit 1
	fi

	# Get userName and write to file inside dirPath/a/userName.txt
	read -p "Enter your MDX username: " userName
	echo "${userName}" > "${dirPath}/a/userName.txt"
	
	# Get favorite movie and write to file inside dirPath/b/myFavMovie.txt
	read -p "Enter your favorite movie: " myFavoriteMovie
	echo "${myFavoriteMovie}" > "${dirPath}/b/myFavMovie.txt"
	
	# Get Move folder a and b into folder c
	mv "${dirPath}/a" "${dirPath}/b" "${dirPath}/c"
done
