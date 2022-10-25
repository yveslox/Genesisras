#!/usr/bin/python

def sumvalue(a,b):
   sum = a + b
   return sum


def hellofunction(name):
   print("Hello ",name,",how are you?")
   return 

def printnameandage(name, age=30):
   print("Name :",name ,",Age : ",age)
   return 

sum = sumvalue(12,7)
print("sum is : ",sum)

hellofunction("Tim")

printnameandage("Tim",25)
printnameandage("Tim")

