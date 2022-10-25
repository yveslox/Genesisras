import java.io.*;
import java.util.Scanner;

class perfect_number
{      
    public static void main(String args[])
    {
     int i,t,n,sum;
     n = 28;

     sum = 0;

     for(i=1;i<=n/2;i++)
     {
      if(n%i == 0)
      {
        sum = sum +i;
      }
     }
     if(n == sum) 
      System.out.println("The Number "+n+" is a perfect number.");
    else
      System.out.println("The Number "+n+" is not a perfect number.");
    }
}