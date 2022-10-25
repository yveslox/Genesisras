#!/usr/bin/python3

list=[1,2,3,4,5,6,7,8]

print("list[0] : ", list[0])
print("list[1] : ", list[1])
print("list[2:5] : ",list[2:5])

#updating list
list[3]=44
print("list(after updating) :", list)

#delete element 
del list[3]
print("list(after delete) :", list)

#length of list 
print("length of list : ", len(list))

#appending two lists 

list2=[99,100]
list=list+list2
print("lsit(after appending two list) :", list )

#check if an element is member of the list
print("Is 6 present in list:", 6 in list)

#iterate list elements
for x in list:
   print (x,)
print("")

#reverse the list
list.reverse()

print("after sorting : ")
for x in list:
   print (x,)



	    




