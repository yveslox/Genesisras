#!/usr/bin/python

list=[1,2,3,4,5,6,7,8];

print("list[0] :",list[0])
print("list[1] :",list[1])
print("list[2:5] :",list[2:5])

#updating list
list[3] = 44
print("list(after update):",list)


#delete element
del list[3]
print("list(after delete) :",list)

#length of list
print("length of list : ",len(list))

#appending two lists
list2= [99,100]
list = list + list2
print("list (after appending another list):",list)

#check if an element is a me,berof list
print("Is 6 present in list?:", 6 in list)

#Iterate list elements
for x in list:
    print (x)
    print("") 

#reserse the list
list.reverse()

print("After Sorting: ")

for x in list:
    print (x)
    
    
