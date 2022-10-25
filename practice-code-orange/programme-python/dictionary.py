#!/usr/bin/python

#python dictionary

dict={
     'age':30,
     'name':'tim',
     'place':'earth'
};


print("dict['name']: ",dict['name'])
print("dict['age']: ",dict['age'])
print("dict['place']: ",dict['place'])
print("")
#update dictionary

dict['place']='pluto'

print("dict(after update) : ", dict)

#delete an entry from dictionery 

del dict['age']
print("dict (after deletion of entry) : ",dict)

#string representation of a dictionary
print("string representation : ",str(dict))
print("")
#print all keys
print("all key : ", dict.keys())

#print all values
print("all values : ", dict.values())


