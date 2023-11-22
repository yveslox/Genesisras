using System;
namespace Myapplication{
    class sumcalculation{
        int sumoftwonumbers(int a,int b)
        {
            int sum = a+b;
            return sum;
        }
        static void Main(string[] args){
        sumcalculation obj = new sumcalculation();
        int sum = obj.sumoftwonumbers(15,5);
        Console.WriteLine("Sum : {0}",sum);       
        }
    }
}