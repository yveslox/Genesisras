import java.io.*;
import java.util.Scanner;

class while_loop
{      
    public static void main(String args[])
    {
     int a = 1;
     
     //learning
     while(a<=5)
     {
        System.out.print(" "+a);
        a++;
     }
     System.out.println();
    
    //exploring
     int sum = 0,b =1;
     while(b<=5)
     {
        sum += b;
        b++ ;
     }
     System.out.println("Sum of 1-5 is "+sum);
    }
}