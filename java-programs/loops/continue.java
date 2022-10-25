import java.io.*;
import java.util.Scanner;

class continue_test
{      
    public static void main(String args[])
    { 
     for(int i=0;i<10;i++)
     {
        if(i%2 == 0)
        {
            continue;
        }
        System.out.println(i);
     }
      
    }
}