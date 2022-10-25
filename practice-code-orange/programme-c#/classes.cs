using System;
class Person
{
public string firstname;
public string lastname;
public int age;

public string fullname()
{
string str =firstname +" "+ lastname;
return str;
}

public void setage(int num)
{
age = num;
}
}

class program
{
static void Main(string[] args)
{

Person person1 = new Person();
person1.firstname="Thomas";
person1.lastname= "Gates";
person1.setage(25);

Console.WriteLine("Full Name : {0}",person1.fullname());
Console.WriteLine("Age : {0}",person1.age);
}
}

