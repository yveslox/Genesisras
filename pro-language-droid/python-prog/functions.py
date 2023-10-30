#!/usr/bin/python

def SumValue(a,b):
    sum = a + b
    return sum 

def HelloFunctions(Name):
    print("hello",Name,",how are you?")
    return

def PrintNameAge(Name,Age=30):
    print("Name",Name,",Age : ",Age)
    return

sum = SumValue(12,7)
print("Sum is :",sum)
HelloFunctions("john")
PrintNameAge("john",25)
PrintNameAge("john")
