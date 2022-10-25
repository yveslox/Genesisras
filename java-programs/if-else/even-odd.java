import java.io.*;
import java.util.Scanner;

class even_odd
{      
    public static void main(String args[])
    { 

        for(int i = 1; i<=10;i++)
        {      
        switch(i)
         { 
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 9 :
             System.out.println(i+" -Odd number.");
             break;
            case 2 :
            case 4 :
            case 6 :
            case 8 :
            case 10 :
             System.out.println(i+" -Even number.");
             break;     
         }
        }
        System.out.println("The End.");
    }
}