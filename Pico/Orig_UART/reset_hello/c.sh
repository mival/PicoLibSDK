#!/bin/bash

# Compilation...

export TARGET="reset_hello"
export GRPDIR="Orig_UART"
export MEMMAP=""

../../../_c1.sh "$1"
