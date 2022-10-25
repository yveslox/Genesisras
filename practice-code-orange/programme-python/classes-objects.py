#!/usr/bin/python

class books:

      totalbooks=0
      
      def __init__(self, name, id):
       self.name=name
       self.id=id
       books.totalbooks+=1
      
      def totalnumberofbooks(self):
       print("total books : ",books.totalbooks)
      
      def bookinformation(self):
       print("book name : ",self.name,"book id :",self.id)   
      
      
book1= books("ABC",12);
book2= books("BCD",7);


book1.bookinformation()
book2.bookinformation()

print("Total number of books : ",books.totalbooks)

