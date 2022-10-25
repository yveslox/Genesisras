import java.io.*;
import java.util.Scanner;

class lcm_hcf
{      
    public static void main(String args[])
    {
     int a,b,i,g, hcf = 0,lcm = 0;
     Scanner sc= new Scanner(System.in);

     System.out.print("Enter first number : ");
     a = sc.nextInt();
     System.out.print("Enter second number : ");
     b = sc.nextInt();

     if(a>b)
     g = a;
     else 
     g = b;

     for(i = g; i<=(a*b); i++)
     {
        if((i%a == 0) && (i%b == 0))
        {
            lcm = i;
            break;
        }
     }

     System.out.println("Hcf : "+lcm);
     hcf =(a * b)/lcm;
     System.out.println("Lcm : "+hcf);
    }
}