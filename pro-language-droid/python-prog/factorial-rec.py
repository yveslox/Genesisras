#!/usr/bin/python
def factorial(n):
    if(n== 1):
        return 1
    else :
        return n * factorial(n-1)

print("Factorial of 6",factorial(6))
