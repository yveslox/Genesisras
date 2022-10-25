import java.io.*;
import java.util.Scanner;

class foreach_loop2
{      
    public static void main(String args[])
    {
     int ar[] = {10,20,30,40,50,60,70,80,90,100};
     
     //learn
     for(int x : ar)
     {
        System.out.print(x+" ");
     }
     System.out.println();
    
     for(int x : ar)
     {
        System.out.print(" ");
     }
     System.out.println();
    }
}