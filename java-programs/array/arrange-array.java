import java.io.*;
import java.util.Scanner;

class arrange_array
{   
 public static void main(String args[])
    {
        
        int a[] = {1,7,5,9,2,12,53,25};
        int i,temp,j;

        System.out.println("Before ascending order :");
        for(i=0;i<8;i++)
        {
            System.out.print(" "+a[i]);
        }


        for(i=0;i<8;i++)
        {
            for(j=i+1;j<8;j++)
            {
                if(a[i]> a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        } 
         
        System.out.println();

        System.out.println("After ascending order :");
        for(i=0;i<8;i++)
        {
            System.out.print(" "+a[i]);
        }
        System.out.println();
                
    }
}