import java.io.*;
import java.util.Scanner;

class palindrom
{      
    public static void main(String args[])
    {
     int n=1215;
     int sum = 0;
     int m = 0;  
 
     //sum 
     while(n>0)
     {
        int r = n%10;
        sum = sum * 10 + r;
        n = n/10;
     }

     if(m==sum)
     {
        System.out.println("Palindrome");   
     }
    else
     {
        System.out.println("Not palindrome"); 
     }
     
    }
}