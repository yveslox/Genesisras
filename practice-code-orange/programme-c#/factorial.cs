using System;
namespace Fact
{

class Factorial
{
 int factorial(int num)
 {
    if(num==1)
    {
      return 1;
    }
    else
    {
      return num * factorial(num-1);
    }
  
 
  }
 
 static void Main(string[] args)
 {
  Factorial obj= new Factorial();
  int value = obj.factorial(6);
  Console.WriteLine("Factorial of 6 : {0}",value);
 }
} 
}

