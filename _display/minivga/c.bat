@echo off
rem Compilation...

if exist minivga4.pio.h del minivga4.pio.h
..\..\_tools\pioasm.exe -o c-sdk minivga4.pio minivga4.pio.h
if not exist minivga4.pio.h goto err

if exist minivga8.pio.h del minivga8.pio.h
..\..\_tools\pioasm.exe -o c-sdk minivga8.pio minivga8.pio.h
if not exist minivga8.pio.h goto err

if exist minivga16.pio.h del minivga16.pio.h
..\..\_tools\pioasm.exe -o c-sdk minivga16.pio minivga16.pio.h
if not exist minivga16.pio.h goto err
goto stop

:err
pause
:stop
