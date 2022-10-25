#!/usr/bin/python

def fibonacci(n):
  if(n==0):
     return 0
  if(n==1):
     return 1
  return fibonacci(n-1) + fibonacci(n-2)
  
i=1
while(i<=10):
 print("Fibonacci number ", i ,":", fibonacci(i))
 i= i + 1
