import java.io.*;
import java.util.Scanner;

class array_keyboard
{   
 public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[5];
        int i;

        for(i=0;i<5;i++)
        {
            System.out.print("Enter value :");
            a[i] = sc.nextInt();
        }
        System.out.print("Array elements are :");
        for(i=0;i<5;i++)
        {
            System.out.print(" "+a[i]);
        }
        System.out.println();
                
    }
}