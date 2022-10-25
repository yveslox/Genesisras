using System;

namespace methode
{
 class sumcalculation
  {
  int sumoftwonumber(int a,int b)
   {
     int sum=a+b;
     return sum;
   }
  
  static void Main(string[] args)
   {
    sumcalculation obj = new sumcalculation();
    int sum= obj.sumoftwonumber(12,7);
    Console.WriteLine("sum : {0}",sum);
   }
  }
}
