#!/usr/bin/env python3

a = input("Enter the first number:\n")
b = input("Enter the second number:\n")
c = int(a) * int(b)
print(a + " x " + b + " = " + str(c))
if c == 0:
    print("The result is positive and negative.")
if c > 0:
    print("The result is positive.")
if c < 0:
    print("The result is negative.")
