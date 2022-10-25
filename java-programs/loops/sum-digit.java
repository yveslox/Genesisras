import java.io.*;
import java.util.Scanner;

class sum_digit
{      
    public static void main(String args[])
    {
     int i=521;

     int sum = 0;  

     //sum 
     while(i>0)
     {
        int r = i%10;
        sum = sum+r;
        i = i/10;
     }
     System.out.println("Sum of digits 521 : "+sum);
    }
}