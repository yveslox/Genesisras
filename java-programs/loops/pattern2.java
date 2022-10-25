import java.io.*;
import java.util.Scanner;

class pattern2
{      
    public static void main(String args[])
    { 
     for(int i = 1; i<=5;i++)
     {
        int j = i;

        while(j <= 5)
        {
            System.out.print("* ");
            j++;
        }
        System.out.println(" ");
     }
    }
}