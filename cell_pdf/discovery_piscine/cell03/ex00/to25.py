#!/usr/bin/env python3

a = int(input("Enter a number less than 25\n"))
if a > 25:
    print("Error")
while a <= 25:
    print("Inside the loop, my variable is " + str(a))
    a += 1

