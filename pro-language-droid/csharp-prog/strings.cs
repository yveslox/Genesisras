using System;
namespace Myapplication{
    class Program{
    
        static void Main(string[] args){
        
        string firstname,lastname;
        firstname ="Thomas";
        lastname = "Roll";
        string fullname =firstname+lastname;
        
        Console.WriteLine("full name: {0}",fullname);
        char[] hello ={'H','e','l','l','o','W','o','r','l','d'};

        string helloAgain= new string(hello);
        Console.WriteLine("Message :{0}",helloAgain);
        string[]arr ={"Hello","wolrd"};

        string helloMessage = String.Join(" ",arr);
        Console.WriteLine("Message :{0}",helloMessage);
        Console.WriteLine("String Length : {0}",helloMessage.Length.ToString());
        Console.WriteLine("substring example :{0}",helloMessage.Substring(6));
               
        }
    }
}