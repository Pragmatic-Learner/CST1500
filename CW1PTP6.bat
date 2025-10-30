@echo off

set MAX_FOLDERS=3
set main_folder="The_bag"

set /p path="Provide a path : "

if exist "%path%" (
	if exist "%path%\%main_folder%" (
		echo "Path does not exist, please enter new, exisiting path..."
		goto eof
	)
	mkdir "%path%\%main_folder%"
) else (
	echo "Path does not exist, please enter new, exisiting path..."
	goto eof
)

cd "%path%/%main_folder%"

for /l %%x in (1,1,%MAX_FOLDERS%) do (
	mkdir "Folder%%x"
	type nul > "Folder%%x\File%%x.txt"
	if not exist "Folder%%x\File%%x.txt" (
		echo "Path does not exist, please enter new, exisiting path..."
		goto eof
	)
)

echo “The 6 items are in The Bag!”

:eof
pause

