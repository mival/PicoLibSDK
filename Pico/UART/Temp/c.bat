@echo off
rem Compilation...

set TARGET=Temp
set GRPDIR=UART
set MEMMAP=

if "%1"=="" goto default
..\..\..\_c1.bat %1

:default
..\..\..\_c1.bat pico
