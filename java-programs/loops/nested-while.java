import java.io.*;
import java.util.Scanner;

class nested_while
{      
    public static void main(String args[])
    {
     int a = 1,b;
     
     //learning
     while(a<=5)
     {
        b = 1;
       while(b<=a)
      {
        System.out.print("* ");
        b++ ;
      }
      a++;
      System.out.println();
     }
     
     
    }
}