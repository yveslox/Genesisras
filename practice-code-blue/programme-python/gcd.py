#!/usr/bin/python

def gcd(a, b):
 if(b== 0):
   return a
 else:
   return gcd(b, a%b);


print("GCD (60,100): ",gcd(60,100))
