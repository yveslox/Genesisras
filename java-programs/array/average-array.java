import java.io.*;
import java.util.Scanner;

class average_array
{   
 public static void main(String args[])
    {
        int a[] = {10,20,30};
        int i,sum=0,avg=0;

        for(i=0;i<a.length;i++)
        {
            sum+= a[i];
        }
        avg=sum/a.length;
        System.out.println("Average :"+avg);
    }
}