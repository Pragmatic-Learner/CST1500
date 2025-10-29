@echo off
:: TASK :
::	1. Create folder the bag
::	2. Create 3 subfolders inside the bag
::	3. Create 1 text file inside each of the 3 subfolder
::	4. Ouput message

:: TASK 1: Create folder The_BAG
mkdir "The_Bag"

:: TASK 2: Create 3 subfolders inside The_Bag
mkdir "The_Bag\Folder1"
mkdir "The_Bag\Folder2"
mkdir "The_Bag\Folder3"

:: TASK 3: Create 3 empty text files inside subfolders
type nul > "The_Bag\Folder1\File1.txt"
type nul > "The_Bag\Folder2\File2.txt"
type nul > "The_Bag\Folder3\File3.txt"

:: TASK 4: Output "The 6 items are in The Bag!”

echo “The 6 items are in The Bag!”

pause :: allow user to see ouput message

