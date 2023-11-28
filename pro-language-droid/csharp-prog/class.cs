using System;

class Person{
    public string firstName;
    public string lastName;
    public int age;
    public string fullName(){
        string str = firstName+" "+lastName;
        return str;
    }
    public void setAge(int num){
        age = num;
    }
}
class Program{
        static void Main(string[] args){
        
        Person person1 = new Person();
        person1.firstName="John";
        person1.lastName="hall";
        person1.setAge(30);

        Console.WriteLine("Full Name : {0}",person1.fullName());
        Console.WriteLine("Age : {0}",person1.age);
               
        }
}
