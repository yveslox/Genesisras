using System;
namespace switchcase{
    class Program{
        static void Main(string[] args){
        int num = 12;
        
        switch(num){
            case 10 :
            Console.WriteLine("10");
            break;
            case 11 :
            Console.WriteLine("11");
            break;
            case 12 :
            Console.WriteLine("12");
            break;
            case 13 :
            Console.WriteLine("13");
            break;
            default :
            Console.WriteLine("not found");
            break;

        }
                
        Console.WriteLine("num is :{0}",num);
        }
    }
}