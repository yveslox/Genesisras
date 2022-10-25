import java.io.*;
import java.util.Scanner;

class label_block
{      
    public static void main(String args[])
    { 
     aBlock :
     {
        bBlock:
        {
            cBlock:
            {
                System.out.println("Before using break");
                if(true)
                {
                    break bBlock;
                }
                System.out.println("This will never execute");
            }
            System.out.println("This is never execute");
        }
        System.out.println("This will be executed");
     }
    }
}