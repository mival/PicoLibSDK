@echo off
rem Compilation...

set TARGET=clocks_gpout
set GRPDIR=Orig_UART
set MEMMAP=

if "%1"=="" goto default
..\..\..\_c1.bat %1

:default
..\..\..\_c1.bat pico
