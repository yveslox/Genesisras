import java.io.*;
import java.util.Scanner;

class nested_ifelse
{      
    public static void main(String args[])
    { 
        int a ,b,c,max;

        a = 23;
        b = 93;
        c = 10;

        if(a>b)
        {
           if(a>c)
             max = a;
           else
             max = c;
        }

        else 
        {
           if(b>c)
             max = b;
           else
             max = c;
        }
        System.out.println("Maximum : "+max);
    }
}
