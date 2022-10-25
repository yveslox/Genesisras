import java.io.*;
import java.util.Scanner;

class lucas_series
{      
    public static void main(String args[])
    {
     int i,n,a = 1,b = 1,c = 1,d;
     n = 10;

     System.out.print(" "+a+" "+b+" "+c);  
     
     for(i=1;i<=(n-3);i++)
     {
      d = a + b + c;
      System.out.print(" "+d);
      a = b;
      b = c;
      c = d;
     }
      System.out.println();
    }
}