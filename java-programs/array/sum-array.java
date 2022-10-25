import java.io.*;
import java.util.Scanner;

class sum_array
{   
 public static void main(String args[])
    {
        int a[] = new int [5];
        int i,sum=0;

        a[0]=1;
        a[1]=2;
        a[2]=3;
        a[3]=4;
        a[4]=5;
        
        for(i=0;i<a.length;i++)
        {
            sum = sum + a[i];
        }
        System.out.println("Sum is :"+sum);
    }
}