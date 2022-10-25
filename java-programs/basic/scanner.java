import java.io.*;
import java.util.Scanner;

class scanner
{      
    public static void main(String args[])
    { 
      Scanner sc = new Scanner(System.in); 
      int n;
      
      System.out.print("Enter a number : ");
      n = sc.nextInt();
      System.out.println("The given number : "+ n);
    }
    
}