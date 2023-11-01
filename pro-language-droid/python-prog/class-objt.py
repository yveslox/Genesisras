#!/usr/bin/python
class Books:
    totalbooks = 0
    def __init__(self,name,id):
        self.name = name
        self.id = id
        Books.totalbooks += 1
    def totalNumberOfbooks(self):
        print("Total Books : ",Books.totalBooks)
    def bookinformation(self):
        print("Book n1ame : ",self.name,",Book id : ",self.id)

book1 = Books("python",12);
book2 = Books("Kotlin",7);
book1.bookinformation()
book2.bookinformation()

print("Total number of books : ",Books.totalbooks)