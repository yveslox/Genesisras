import java.io.*;
import java.util.Scanner;

class max_digit
{      
    public static void main(String args[])
    {
     int i=235;

     int temp = 0;  

     //sum 
     while(i>0)
     {
        int r = i%10;
        i = i/10;
        if(temp <r)
        {
            temp = r;
        }
     }
     System.out.println("Max of digits is : "+temp);
    }
}