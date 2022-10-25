#!/usr/bin/python

#try block 

try:
  fh= open("filename","r")
  
  num= -5
  #raise an exception 
  if(num< 0):
     raise ("Invalid number !")   
#catch a specific type of exception 

except IOError:
  print("case 1: Error:cannot find the file")
  
#catch any type of exception
except:
  print("case 2: Error occured")
