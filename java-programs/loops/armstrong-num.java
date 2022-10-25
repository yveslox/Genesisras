import java.io.*;
import java.util.Scanner;

class armstrong_num
{      
    public static void main(String args[])
    {
     int n,x,r,sum;

    n = 153;
    x = n;
    
    sum = 0;

    while(n!=0)
     {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n/10;
     }

     if(sum == x)
        System.out.println(x+" is armstrong number.");  
    else
        System.out.println(x+" is not a armstrong number."); 
    }
}