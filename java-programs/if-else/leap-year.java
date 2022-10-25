import java.io.*;
import java.util.Scanner;

class leap_year 
{      
    public static void main(String args[])
    { 
        int y = 2016;

        if( y % 100 == 0)
        {
            if(y % 100 == 0)
             System.out.println("It is a leap year");
            else
             System.out.println("It is not a leap year");
        }
        else if(y % 4 == 0)
             System.out.println("It is a leap year");
        else 
           System.out.println("It is not a leap year");
    }
}