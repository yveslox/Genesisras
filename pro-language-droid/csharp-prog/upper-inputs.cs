using System;
namespace upperinputs{
    class Program{
        static void Main(string[] args){
        string firstName = Convert.ToString(Console.ReadLine());

        string secondName = Convert.ToString(Console.ReadLine());
        
        int age = Convert.ToInt32(Console.ReadLine());
        
        float score = float.Parse(Console.ReadLine());
        
        Console.WriteLine("Name : {0} {1}",firstName,secondName);
        Console.WriteLine("age : {0}",age);
        Console.WriteLine("Score : {0}",score);
        }
    }
}