import java.io.*;
import java.util.Scanner;

class prime_number
{      
    public static void main(String args[])
    {
     int i,n;
     boolean flag = true;
     n = 29;

     for(i=2;i<=n/2;i++)
     {
      if(n%i == 0)
      {
        flag = false;
        break;
      }
     }
     if(flag == true) 
      System.out.println("The Number "+n+" is a prime number.");
    else
      System.out.println("The Number "+n+" is not a prime number.");
    }
}