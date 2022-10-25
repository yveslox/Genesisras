import java.io.*;
import java.util.Scanner;

class hcf_lcm
{      
    public static void main(String args[])
    {
     int a,b,i,s, hcf = 0,lcm = 0;
     Scanner sc= new Scanner(System.in);

     System.out.print("Enter first number : ");
     a = sc.nextInt();
     System.out.print("Enter second number : ");
     b = sc.nextInt();

     if(a<b)
     s = a;
     else 
     s = b;

     for(i = 1;i<=s;i++)
     {
        if((a%i == 0) && (b%i == 0))
        {
            hcf = i;
        }
     }

     System.out.println("Hcf : "+hcf);
     lcm =(a * b)/hcf;
     System.out.println("Lcm : "+lcm);
    }
}