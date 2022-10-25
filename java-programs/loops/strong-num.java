import java.io.*;
import java.util.Scanner;

class strong_num
{      
    public static void main(String args[])
    {
     int n,x,r,sum,f,i;

     n = 145;

     x = n;
      

     sum = 0;

     while(n!=0)
     {
        r = n % 10;
        f = 1;
        for(i = 1; i<=r; i++)
        {
          f = f * i;
        }
        sum = sum + f;
        n = n/10;
     }

     if(sum == x)
        System.out.println(x+" is strong number.");  
    else
        System.out.println(x+" is not a strong number."); 
    }
}