#!/usr/bin/python

#a tuple is immutable 

tup1=(1,2,3,4,5);

print("tup1[0]: ", tup1[0])
print("tup1[1:3]: ",tup1[2: 3])

#following statement is not valid
#tup1[2]=33

#length of tuple
print("length of tup1 : ", len(tup1))

#concatenate two tuples
tup2=tup1+tup1
print("tup2 : ",tup2)

#check if an element is present in tuple

print("is 4 present in tup1 : ",4 in tup1)


