using System;
namespace Recursion
{ 
class recursion
{
int Factorial(int num)
 {
  if(num==1) 
  { return 1;}
  else {return num * Factorial(num-1);
 }
}
 
static void Main(string[] args)
 {
  recursion obj= new recursion();
  int Value = obj.Factorial(6);
  Console.WriteLine("Factorial of 6 :{0}",Value);
 }
 
 }
}
