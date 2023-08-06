@echo off
rem Setup device to compile

rem First command-line parameter (%1) of this batch contains device name (e.g. picopad10).
rem This batch is called from the _c1.bat file.

rem Use configuration name as parameter of the batch, to select target device:
rem   pico ... base Raspberry Pico module, optionally with UART on pins GPIO0 and GPIO1
rem   picoinomini ... Picoino mini version with QVGA RGB332 output
rem   picoino10 ... Picoino version 1.0 with QVGA RGB332 output
rem   picopad08 ... PicoPad beta version 0.8
rem   picopad10 ... PicoPad version 1.0 with TFT RGB565 output
rem   (empty) ... default compilation

rem Move ":default" label before configuration, which you want to use as default.

if "%1"=="pico" goto pico
if "%1"=="picoinomini" goto picoinomini
if "%1"=="picoino10" goto picoino10
if "%1"=="picopad08" goto picopad08
if "%1"=="picopad10" goto picopad10
if "%1"=="" goto default

echo.
echo Incorrect configuration "%1"!
echo Press Ctrl+C to break compilation.
pause
goto default

:pico
set DEVICE=pico
set DEVCLASS=pico
set DEVDIR=!Pico
exit /b

:picoinomini
set DEVICE=picoinomini
set DEVCLASS=picoino
set DEVDIR=!PicoinoMini
exit /b

:picoino10
set DEVICE=picoino10
set DEVCLASS=picoino
set DEVDIR=!Picoino10
exit /b

:picopad08
set DEVICE=picopad08
set DEVCLASS=picopad
set DEVDIR=!PicoPad08
exit /b

:default
:picopad10
set DEVICE=picopad10
set DEVCLASS=picopad
set DEVDIR=!PicoPad10
exit /b
