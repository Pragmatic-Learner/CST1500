@echo off

set main_folder="The_bag"
set /p path="Provide a path : "

:: Check if %path% exists
if not exist "%path%" (
	echo "ERROR!!  %path% does not exist, please enter new, exisiting path..."
	goto eof
)

:: Check if %path%\%main_folder% already exists
if exist "%path%\%main_folder%" (
	echo "ERROR!!  %path%\%main_folder% already exists!!"
	goto eof
)

:: Move into %path%, create folder %main_folder%, and move into %main_folder%
cd "%path%"
mkdir "%main_folder%"
cd "%main_folder%"

:: Create folderX and inside folderX create fileX for X times
for /l %%x in (1,1,3) do (
	mkdir "Folder%%x"
	type nul > "Folder%%x\File%%x.txt"

	:: Verify successfull creating of folderX and fileX
	if not exist "Folder%%x" (
		echo "ERROR!!  Folder%%x was not created!!"
		goto eof
	)
	if not exist "Folder%%x\File%%x.txt" (
		echo "ERROR!!  File%%x was not created!!"
		goto eof
	)
)

echo "The 6 items are in The Bag!"

:: eof being end of file, that is, the pseudo-exit
:eof
pause

