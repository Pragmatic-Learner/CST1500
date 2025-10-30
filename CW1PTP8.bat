@echo off

set main_folder="myBatchScript"
set txt_file="results.txt"
set /p path="Enter path for creating files : "

:: Check if invalid %path% was entered, resulting in going to end of file
if not exist "%path%" (
	echo "ERROR!!  %path% does not exist, please enter new, exisiting path..."
	goto eof
)

:: Check if %path%\%main_folder% already exists. hence going to eof
if exist "%path%\%main_folder%" (
	echo "ERROR!!  %path%\%main_folder% already exists!!"
	goto eof
)

:: Move into %path%, create folder %main_folder% amd create file %txt_file%
cd "%path%"
mkdir "%main_folder%"
type nul > "%txt_file%"

:: Check if %main_folder% and %txt_file% were successfully created
if not exist "%main_folder%" (
	echo "ERROR!!  %main_folder% was not created!!"
	goto eof
)
if not exist "%txt_file%" (
	echo "ERROR!!  %txt_file% was not created!!"
	goto eof
)

:: Write text into %txt_file%
echo "Knock, knock." > "%txt_file%"
echo "(Who’s there?)" >> "%txt_file%"
echo "Recursion." >> "%txt_file%"
echo "(Recursion who?)" >> "%txt_file%"
echo "Knock Knock…" >> "%txt_file%"

:: Copy %txt_file% into %main_folder%
copy "%txt_file%" "%main_folder%"
del "%txt_file%"

echo "Task Complete!"

:eof
pause
