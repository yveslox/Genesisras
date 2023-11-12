using System;
namespace typesconversion{
    class Program{
        static void Main(string[] args){
            float fl = 12.75f;
            int num =(int)fl;
            Console.WriteLine("num : {0}",num);

            int i =60;
            bool b =true;
            float f = 12.75f;
            double d =1.23156;
            Console.WriteLine(i.ToString());
            Console.WriteLine(b.ToString());
            Console.WriteLine(f.ToString());
            Console.WriteLine(d.ToString());

        }
    }
}