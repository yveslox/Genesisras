using System;
namespace Myapplication{
    class recusion{
        int factorial(int num)
        {
            if(num == 1)
            {
                return 1;
            }
            else{
                return num *factorial(num-1);
            }
        }

        static void Main(string[] args){
        recusion obj = new recusion();
        int value = obj.factorial(6);
        Console.WriteLine("Factorial of 6 : {0}",value);       
        }
    }
}