import java.io.*;
import java.util.Scanner;

class foreach_loop
{      
    public static void main(String args[])
    {
     int arrayname[] = {1,3,5,7,9,11,13,15,17,19,21};
     
     //learn
     for(int val : arrayname)
     {
        System.out.print(" "+val);
     }
     System.out.println();
    
    //explore
    for(float val : arrayname)
     {
        System.out.print(" "+val);
     }
     System.out.println();

     for(double val : arrayname)
     {
        System.out.print(" "+val);
     }
     System.out.println();
    }
}