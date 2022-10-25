#!/usr/bin/python

#python dictionary

dict = { 
'Age': 30,
'Name': 'Tim',
'Place':'Earth'
};

print("dict['name']: ",dict['Name'])
print("dict['Age']: ",dict['Age'])
print("dict['Place']: ",dict['Place'])

#update dictionary

dict['Place']='pluto'

print("dict(after update): ",dict)

#delete an entry from dictionary

del dict['Age']

print("dict(after deletion of entry): ",dict)

#string representation of a dictionary

print("String representation :",str(dict))

#print all keys

print("All keys : ",dict.keys())

#print all values

print("All values :",dict.values())




