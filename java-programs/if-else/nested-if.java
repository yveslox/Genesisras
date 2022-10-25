import java.io.*;
import java.util.Scanner;

class nested_if 
{      
    public static void main(String args[])
    { 
        int a = 10;

        if(a>0)
        {
            if(a<=10)
            {
             System.out.println("a--> 0 to 10");
            }
            if(a>10 && a<=20)
            {
             System.out.println("a --> 11 to 20");
            }
            if(a>20)
            {
             System.out.println("a --> 21 to ((2^31 - 1)=2,14,74,83,647");
            }
        }
    }
}