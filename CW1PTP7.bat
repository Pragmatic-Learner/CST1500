@echo off
:: Task 1. Create main folder CST1500
set main_folder="CST1500"
mkdir %main_folder%

:: TASK 2. Create 3 subfolder inside CST1500: C_Programs, Scripts, Docs
:: each variable is a pseudo constant for easy portability
set c_files="C_Programs"
set scripts="Scripts"
set documents="Docs"
cd %main_folders%
mkdir %c_files%
mkdir %scripts%
mkdir %documents%

:: TASK 3. COPY all C programs written for coursework into C_Programs
set courseworkDirectory="%USERPROFILE%\Documents\CST1500CW1\"
for %%cfile in ("%courseworkDirectory%\*.c") do (
	copy "%cfile%" "./C_Programs"
)

:: TASK 4. List content of C_Programs
dir "./C_Programs"


:: TASK 5. OUTSIDE CMD: take screenshot, paste into word document,
:: caption as "Fig. 1: Creating folders and copying files in the CMD window.",
:: and save document as Screenshots, inside Docs.
pause


:: TASK 5. List all the content in CST1500, and cat only .c files

:: TASK 7. OUTSIDE CMD: a. screenshot cmd, paste into Screenshot,
:: caption as "Fig. 2: Result of batch script listing all C programs." and
:: save document inside Docs, inside Screenshots

:: TASK 8. Move CW1PTP7.bat into Scripts
