using System;
namespace userinput
{
 class program
 {
  static void Main(string[] args)
  {
   string firstname= Convert.ToString(Console.ReadLine());
   string secondname= Convert.ToString(Console.ReadLine());
   
   int age=Convert.ToInt32(Console.ReadLine());
   
   float score=float.Parse(Console.ReadLine());
   
   Console.WriteLine("Name :{0} {1}",firstname, secondname);
   Console.WriteLine("Age : {0}",age);
   Console.WriteLine("Score : {0}",score);
  }
 }
}
