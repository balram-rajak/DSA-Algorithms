@echo off
setlocal enabledelayedexpansion


:: Check if the file name argument is provided
if "%1"=="" (
    echo Error: No file name provided.
    echo Usage: TaskRunner.bat %%<filename>%%
    exit /b 1
)

:: Get the file name from the first argument
set file_name=%~1

:: Check if the file exists
if not exist "%file_name%" (
    echo Error: File "%file_name%" does not exist.
    exit /b 1
)



:: Get the start time
for /f "tokens=1-4 delims=:.," %%a in ("%time%") do (
    set /a start_h=1%%a%%100 - 100
    set /a start_m=1%%b%%100 - 100
    set /a start_s=1%%c%%100 - 100
    set /a start_ms=1%%d%%1000 - 1000
)

:: Debug: Print the start time
echo Start time: !start_h!:!start_m!:!start_s!.!start_ms!

:: Run the program
echo Running "%file_name%"...
"%file_name%" < "D:\vault\CodeLab\inputf.in" > "D:\vault\CodeLab\outputf.in"

:: Get the end time
for /f "tokens=1-4 delims=:.," %%a in ("%time%") do (
    set /a end_h=1%%a%%100 - 100
    set /a end_m=1%%b%%100 - 100
    set /a end_s=1%%c%%100 - 100
    set /a end_ms=1%%d%%1000 - 1000
)

:: Debug: Print the end time
echo End time: !end_h!:!end_m!:!end_s!.!end_ms!

:: Calculate elapsed time in milliseconds
set /a start_total_ms=((start_h*3600 + start_m*60 + start_s) * 1000 + start_ms)
set /a end_total_ms=((end_h*3600 + end_m*60 + end_s) * 1000 + end_ms)
set /a duration=end_total_ms - start_total_ms

:: Handle negative durations (if the time crosses midnight)
if %duration% lss 0 (
    set /a duration+=86400000
)

:: Print the execution time
echo Execution time: %duration% ms