using System;

struct Person
{
public string firstname;
public string lastname;
public int age;
public int id;
};

class program
{
 static void Main(string[] args)
 {
  Person person1;
  person1.firstname = "Thomas";
  person1.lastname = "Gates";
  person1.age=25;
  person1.id=12;
  
  Console.WriteLine("First name: {0}",person1.firstname);
  Console.WriteLine("Last name: {0}",person1.lastname);
  Console.WriteLine("age: {0}",person1.age);
  Console.WriteLine("Id: {0}",person1.id);
 }
}
