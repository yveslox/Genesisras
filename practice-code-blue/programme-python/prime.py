#!/usr/bin/python

def primeornot(num):

#prime numbers are greater than 1
 if (num>1):
#chack if it is divisible by a smaller number
   for i in range(2,num):
     if (num % i)==0:
       print(num,"is not a prime number")
       break
     else:
        print(num,"is a prime number")
        break
#if num<=1, it is not prime
 else:
     print(num,"ist not a prime number")


#call mehtod primeornot(num)

primeornot(17)
primeornot(31)
primeornot(20)
primeornot(21)
primeornot(97)

