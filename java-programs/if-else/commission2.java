import java.io.*;
import java.util.Scanner;

class commission2
{      
    public static void main(String args[])
    { 
     double sales, comm;

     sales = 12000;

     if(sales< 5000)
       {
            comm = 0;
       }

     else if(sales < 10000)
       {
            comm = sales * 0.05;
       }
     else if(sales <20000)
       {
            comm = sales * 0.1;
       }
    else if(sales < 30000)
        {
            comm = sales * 0.12;
        }
    else
        {
                comm = sales * 0.15;
        }
         
      System.out.println("The commission is ="+comm); 
    }
      
}

