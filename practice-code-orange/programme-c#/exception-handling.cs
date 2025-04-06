using System;

class program
{
 static void Main(string[] args)
 {
  int a = 12;
  int b = 1;
  int c ;
  try
  {
   c = a / b;
   Console.WriteLine("Trial: ",c);
  }
  catch(Exception e)
  {
   Console.WriteLine("Exception: {0}",e);
  }
  finally
  {
   Console.WriteLine("Finally block executed");
  }
 }
}
