@echo off

set main_folder="The_bag"

set /p path="Provide a path : "

if exist "%path%" (
	if exist "%path%\%main_folder%" (
		echo "ERROR!!  %path%\%main_folder% already exists!!"
		goto eof
	)
	cd "%path%"
) else (
	echo "ERROR!!  Path does not exist, please enter new, exisiting path..."
	goto eof
)

mkdir "%main_folder%"
cd "%main_folder%"

for /l %%x in (1,1,3) do (
	mkdir "Folder%%x"
	type nul > "Folder%%x\File%%x.txt"
	if not exist "Folder%%x" (
		echo "ERROR!!  Folder%%x was not created!!"
		goto eof
	) else if not exist "Folder%%x\File%%x.txt" (
		echo "ERROR!!  File%%x was not created!!"
		goto eof
	)
)

echo “The 6 items are in The Bag!”

:eof
pause

