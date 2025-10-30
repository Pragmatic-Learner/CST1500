@echo off
:: Set the %main_folder%
set main_folder="%USERPROFILE%\Desktop\CST1500"

:: Display All C files, in main_folder and it's subfolders
echo The following are C programs:

:: /s searches subfolders and /b
:: source https://ss64.com/nt/dir.html
dir "%main_folder%\*.c" /s /b

pause

