@echo off
rem Compilation...

set TARGET=SDCARD
set GRPDIR=TEST
set MEMMAP=

if "%1"=="" goto default
..\..\..\_c1.bat %1

:default
..\..\..\_c1.bat picotron
