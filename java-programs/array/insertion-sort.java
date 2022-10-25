import java.io.*;
import java.util.Scanner;

class insertion_sort
{   
 public static void main(String args[])
    {
        
        int a[] = {0,20,40,10,50,30};
        int i,n=5;

        System.out.println("The unsorted array is :");
        for(i=1;i<=n;i++)
        {
            System.out.print(" "+a[i]);
        }

        int tmp,j;
        a[0]=-2147483648;

        for(i=1;i<=n;i++)
        {
        
                tmp = a[i];
                j = i -1;
                while(tmp <a[j])
                {
                    a[j + 1] = a[j];
                    j--;
                }
                a[j+1] = tmp;
        } 
         
        System.out.println();

        System.out.println("Sorted numbers are :");
        for(i=1;i<=n;i++)
        {
            System.out.print(" "+a[i]);
        }
        System.out.println();
                
    }
}