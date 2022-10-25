import java.io.*;
import java.util.Scanner;

class count_number
{      
    public static void main(String args[])
    {
     int n,c;

     n = 1234;

     c = 0;     
     //learning
     while(n!=0)
     {
        n = n / 10;
        c++;
     }
     System.out.println("Number of digits : "+c);
    }
}