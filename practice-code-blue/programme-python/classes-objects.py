#!/usr/bin/python

class Books:
      totalBooks = 0

def _init_(self, name, id):
     self.name = name
     self.id = id
     Books.totalBooks += 1

def totalnumberofbooks(self):
   print("Total Book : ", Books.totalBooks)

def BookInformation(self):
   print("Book name : ",self.name,", Book id: ",self.id)

book1 = Books("ABC", 12);
book2 = Books("BCD", 7);

book1.BookInformation()
book2.BookInformation()

print("Total number of books :",Books.totalBooks)
