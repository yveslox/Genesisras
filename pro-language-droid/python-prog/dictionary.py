#!/usr/bin/python

#python dictionary
dict={
    'Age':30,
    'Name':'john',
    'Place':'Earth'
};


print("dict[Name] :",dict['Name'])
print("dict[Age] :",dict['Age'])
print("dict[Place] :",dict['Place'])

#update dictionary
dict['Place'] ='Pluto'
print("Dict (after update) :",dict)

#delete an entry from dictionary
del dict['Age']
print("Dict (after deletion of an empty) :",dict)
print("String representation :",str(dict))

#print all keys 
print("Akll keys : ",dict.keys())

#print all values
print("All values : ",dict.values())