import java.io.*;
import java.util.Scanner;

class min_array
{   
 public static void main(String args[])
    {
        int a[] = {10,60,5,40,50};
        int i,min=a[0];
        
        for(i=0;i<5;i++)
        {
            if(min>a[i])
            min = a[i];
        }
        System.out.println("Minimum : "+min);
    }
}