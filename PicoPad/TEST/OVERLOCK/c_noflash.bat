@echo off
rem Compilation...

set TARGET=OVERLOCK
set GRPDIR=TEST
set MEMMAP=noflash

if "%1"=="" goto default
..\..\..\_c1.bat %1

:default
rem ..\..\..\_c1.bat picopad08
rem ..\..\..\_c1.bat picopadvga
..\..\..\_c1.bat picopad10
