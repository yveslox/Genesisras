using System;


class Program{
        static void Main(string[] args){
int a = 12;
int b = 0;
try{
    int c=a/b;
}catch(Exception e)
{
    Console.WriteLine("Exception : {0}",e.Message);
}
finally{
    Console.WriteLine("Finally block executed");
}      
               
        }
}
