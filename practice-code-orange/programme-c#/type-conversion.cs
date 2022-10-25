using System;
namespace typeconversion
{
class program
{
 static void Main(string[] args)
 {
  float f1=12.75f;
  int num=(int)f1;
  
  Console.WriteLine("num: {0}",num);
  
  int i=60;
  bool b= true;
  float f= 12.75f;
  double d=1.234556;
  
  Console.WriteLine(i.ToString());
  Console.WriteLine(f.ToString());
  Console.WriteLine(d.ToString());
  Console.WriteLine(b.ToString());
 }
}
}
