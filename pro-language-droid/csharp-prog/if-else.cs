using System;
namespace ifelse{
    class Program{
        static void Main(string[] args){
        int a = 50;
        
        if (a<100){
         Console.WriteLine("a is less than 100");
        }
        else{
          Console.WriteLine("a is not less than 100");
        }
         
        Console.WriteLine("value of a is : {0}",a);
        }
    }
}