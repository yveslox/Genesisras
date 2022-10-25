import java.io.*;
import java.util.Scanner;

class sum_evenodd
{      
    public static void main(String args[])
    { 
     int i;
     int sum = 0; 
     int sum1 = 0;
    
    for (i=0;i<=10;i++)
    {
      if(i%2 == 0)
      sum = sum +i;
      else
      sum1 = sum1 + i;
    }
    System.out.println("Sum of even nos i ::: "+sum);
    System.out.println("Sum of odd nos i ::: "+sum1);
    }
}