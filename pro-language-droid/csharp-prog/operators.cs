using System;
namespace operators{
    class Program{
        static void Main(string[] args){
        int a =12;
        int b= 7;
        int sum = a+b;
        int diff = a-b;
        int div = a/b;
        int rem = a%b;
        
        int afterincrement = a++;
        int afterdecrement = a--;

        int val1=a&b;
        int val2=a|b;
        int val3=~a;
        int val4=a<<b;

        Console.WriteLine("sum : {0}",sum);
        Console.WriteLine("diff : {0}",diff);
        Console.WriteLine("div : {0}",div);
        Console.WriteLine("rem : {0}",rem);

        Console.WriteLine("afterincrement : {0}",afterincrement);
        Console.WriteLine("afterdecrement : {0}",afterdecrement);

        Console.WriteLine("a&b : {0}",val1);
        Console.WriteLine("a|b : {0}",val2);
        Console.WriteLine("~a : {0}",val3);
        Console.WriteLine("a<<b : {0}",val4);
        }
    }
}