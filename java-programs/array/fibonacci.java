import java.io.*;
import java.util.Scanner;

class fibonacci
{   
 public static void main(String args[])
    {
        int a[] = new int[20];
        int n,i;
        
        n = 10;
        a[0] = 0;
        a[1] = 1;

        for(i=2;i<n;i++)
        {
            a[i] = a[i -1] +a[i -2];
        }

        for(i=0;i<n;i++)
        {
            System.out.print(" "+a[i]);
        }
        System.out.println();
                
    }
}