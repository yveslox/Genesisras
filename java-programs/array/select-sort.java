import java.io.*;
import java.util.Scanner;

class select_sort
{   
 public static void main(String args[])
    {
        
        int a[] = {40,20,50,10,30};
        int i,j;

        System.out.println("The unsorted number are :");
        for(i=0;i<5;i++)
        {
            System.out.print(" "+a[i]);
        }

        int small,pos,tmp;


        for(i=0;i<5;i++)
        {
          small = a[i];
          pos = i;
          for(j = i+1;j<5;j++)
          {
            if(a[j]<small)
            {
                small = a[j];
                pos = j;
            }

          }
          tmp = a[i];
          a[i] = a[pos];
          a[pos] = tmp;
         
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