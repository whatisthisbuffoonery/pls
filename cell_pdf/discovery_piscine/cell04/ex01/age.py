#!/usr/bin/env python3

a = int(input("Please tell me your age: "))
b = 10
print("You are currently " + str(a) + " years old.")
while b < 40:
    print("In " + str(b) + " years, you'll be " + str(a + b) + " years old.")
    b += 10
