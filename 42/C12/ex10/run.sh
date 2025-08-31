#!/bin/bash
make
valgrind ./a.out "$@"
