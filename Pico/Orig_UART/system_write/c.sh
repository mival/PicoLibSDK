#!/bin/bash

# Compilation...

export TARGET="system_write"
export GRPDIR="Orig_UART"
export MEMMAP=""

../../../_c1.sh "$1"
