using System;
namespace Myapplication{
    class arrays{
    
        static void Main(string[] args){
        
        int[] arr = new int[10];
        
        for(int i=0;i<10;i++)
        {
            arr[i]=i+10;
        }
        for(int j=0;j<10;j++)
        {
           Console.WriteLine("arr[{0}]: {0}",arr[j]);
        }
               
        }
    }
}