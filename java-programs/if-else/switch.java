import java.io.*;
import java.util.Scanner;

class switch_test
{      
    public static void main(String args[])
    { 
        int a = 2;
              

        switch(a)
         { 
            case 1 :
             System.out.println("One");
             break;
            case 2 :
             System.out.println("Two");
             break;
            case 3 :
             System.out.println("Three");
             break;
            default:
             System.out.println("Invalid value.");  
         }
    }
}