import java.io.*;
import java.util.Scanner;

class bubble_sort
{   
 public static void main(String args[])
    {
        
        int a[] = {40,20,50,10,30};
        int i,j,t;

        System.out.println("unorted numbers are :");
        for(i=0;i<5;i++)
        {
            System.out.print(" "+a[i]);
        }


        for(i=0;i<5-1;i++)
        {
            for(j=0;j<(5-1-i);j++)
            {
                if(a[j]> a[j+1])
                {
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }
        } 
         
        System.out.println();

        System.out.println("Sorted numbers are :");
        for(i=0;i<5;i++)
        {
            System.out.print(" "+a[i]);
        }
        System.out.println();
                
    }
}