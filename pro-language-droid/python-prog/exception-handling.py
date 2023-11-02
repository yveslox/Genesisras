#!/usr/bin/python

try:
    fh = opne("filename","r")
    num = -5

    if(num <0):
        raise("invalid number !")
except IOError:
    print("Case 1 : Error :cannot find the file")
except:
    print("Case 2 : Error occured")

