#!/usr/bin/python
def Primeornot(num):
    if num>1:
        for i in range(2,num):
            if(num % i)==0:
                print(num," is not a prime number")
                break
            else:
                print(num,"is prime number ")
                break
    else:
        print(num," is not prime number")

Primeornot(17)
Primeornot(31)
Primeornot(20)
Primeornot(21)
Primeornot(97)