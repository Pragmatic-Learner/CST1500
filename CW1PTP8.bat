@echo off

set main_folder="myBatchScript"
set txt_file="results.txt"

set /p path="Enter path for creating files : "

if exist "%path%" (
	if exist "%path%\%main_folder%" (
		echo "ERROR!!  %path%\%main_folder% already exists!!"
		goto eof
	)
	cd "%path%"
) else (
	echo "ERROR!!  %path% does not exist, please enter new, exisiting path..."
	goto eof
)

mkdir "%main_folder%"
type nul > "%txt_file%"
if not exist "%main_folder%" (
	echo "ERROR!!  %main_folder% was not created!!"
	goto eof
) else if not exist "%main_folder%\%txt_file%" (
	echo "ERROR!!  %txt_file% was not created!!"
	goto eof
)
echo "Knock, knock." > "%txt_file%"
echo "(Who’s there?)" > "%txt_file%"
echo "Recursion." > "%txt_file%"
echo "(Recursion who?)" > "%txt_file%"
echo "Knock Knock…" > "%txt_file%"

copy "%txt_file%" "%main_folder%"
del "%txt_file%"

echo "Task Complete!"

:eof
pause
