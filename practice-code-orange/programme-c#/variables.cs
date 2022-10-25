using System;
namespace variable
{
 class program
 {
  static void Main(string[] args)
  {
   short x;
   int y;
   double z;
   char ch;
   string name;
   
   x=10;
   y=20;
   z=x+y;
   ch='T';
   name="Tim";
   
   Console.WriteLine("x={0}, y={1}, z={2}",x,y,z);
   Console.WriteLine("ch={0}",ch);
   Console.WriteLine("name: {0}",name);
  }
 }
}
