@echo off
rem Compilation...

set TARGET=spi_bme280
set GRPDIR=Orig_UART
set MEMMAP=

if "%1"=="" goto default
..\..\..\_c1.bat %1

:default
..\..\..\_c1.bat pico
