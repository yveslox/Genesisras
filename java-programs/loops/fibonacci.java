import java.io.*;
import java.util.Scanner;

class fibonacci
{      
    public static void main(String args[])
    {
     int i,n,a = 0,b = 1,c = 0;
     n = 6;

     System.out.print(" "+a+" "+b);  
     
     for(i=1;i<=(n-2);i++)
     {
      c = a + b;
      System.out.print(" "+c);
      a = b;
      b = c;
     }
      System.out.println();
    }
}