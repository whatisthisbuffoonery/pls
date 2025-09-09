#!/usr/bin/env python3

a_str = input("Enter a number\n")
a = int(a_str)
b = 0
while b < 10:
    print(str(b) + " x " + a_str + " = " + str(a * b))
    b += 1
