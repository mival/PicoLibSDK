#!/bin/bash

# Compilation...

export TARGET="multicore_runner"
export GRPDIR="Orig_UART"
export MEMMAP=""

../../../_c1.sh "$1"
