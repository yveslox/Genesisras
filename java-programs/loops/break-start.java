import java.io.*;
import java.util.Scanner;

class break_start
{      
    public static void main(String args[])
    { 
     for(int i=0;i<5;i++)
     {
        System.out.println(i);
        if(i == 5)
        {
            break;
        }
     }
      System.out.println("loop over");
    }
}