using System;

class program
{
 static void Main(string[] args)
 {
  int a = 12;
  int b = 0;
  
  try
  {
  int c = a / b;
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
