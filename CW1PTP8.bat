@echo off
set mainFolder="myBatchScript"
set txtFile="results.txt"

mkdir "%mainFolder%"
type nul > "%txtFile%"

echo "Knock, knock." > "%txtFile%"
echo "(Who’s there?)" > "%txtFile%"
echo "Recursion." > "%txtFile%"
echo "(Recursion who?)" > "%txtFile%"
echo "Knock Knock…" > "%txtFile%"

copy "%txtFile%" "%mainFolder%"

del "%txtFiles%"

echo "Task Complete!"
