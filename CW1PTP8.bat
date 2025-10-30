@echo off

set main_folder="myBatchScript"
set txtFile="results.txt"

set /p path="Enter path for creating files : "

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

cd "%path%"
type nul > "%txtFile%"
echo "Knock, knock." > "%txtFile%"
echo "(Who’s there?)" > "%txtFile%"
echo "Recursion." > "%txtFile%"
echo "(Recursion who?)" > "%txtFile%"
echo "Knock Knock…" > "%txtFile%"

copy "%txtFile%" "%mainFolder%"
del "%txtFiles%"

echo "Task Complete!"

:eof
pause
