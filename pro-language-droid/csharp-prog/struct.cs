using System;

struct Person{
    public string firstName;
    public string lastName;
    public int age;
    public int id;
};


class Program{
    
        static void Main(string[] args){
        
        Person person1;
        person1.firstName="john";
        person1.lastName="hall";
        person1.age=25;
        person1.id=12;

        Console.WriteLine("first Name : {0}",person1.firstName);
        Console.WriteLine("last Name : {0}",person1.lastName);
        Console.WriteLine("Age : {0}",person1.age);
        Console.WriteLine("id : {0}",person1.id);
               
        }
}
