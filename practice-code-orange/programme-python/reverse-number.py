#!/usr/bin/python3


def reverse( num ):
     sum = 0
     while(num > 0) :
           sum+=num
           rem= num % 10
           num= num / 10
           sum=(sum * 10) + rem
         
     return sum
print("Reverse of 12345:",reverse(12345))
print("Reverse of 1947:",reverse(1947))
print("Reverse of 4321:",reverse(4321))
print("Reverse of 24689:",reverse(24689))
print("Reverse of 76543:",reverse(76543))
