#!/usr/bin/env python3

import sys

if len(sys.argv) > 1:
    print("none")
    sys.exit()
a = 0
b = 0
while a < 11:
    sys.stdout.write("Table de " + str(a) + ":")
    while b < 11:
        sys.stdout.write(" " + str(a * b))
        b += 1
    b = 0
    a += 1
    sys.stdout.write("\n")
