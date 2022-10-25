import java.io.*;
import java.util.Scanner;

class max_array
{   
 public static void main(String args[])
    {
        int a[] = {10,60,30,40,50};
        int i,max=0;
        
        for(i=0;i<5;i++)
        {
            max = a[i];
        }
        System.out.println("Maxime : "+max);
    }
}