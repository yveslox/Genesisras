import java.io.*;
import java.util.Scanner;

class string_literal
{      
    public static void main(String args[])
    { 
        String dname;
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter day name = ");
        dname = sc.next();
        
        //dname = dname.toUpperCase();

            switch(dname)
            {             
            case "Monday" :
             System.out.println("It is day number-: 1");
            break;
            case "Tuesday" :
             System.out.println("It is day number-: 2");
             break;
            case "Wednesday" :
             System.out.println("It is day number-: 3");
             break;
            case "Thrusday" :
             System.out.println("It is day number-: 4");
             break;
            case "Friday" :
             System.out.println("It is day number-: 5");
             break;
            case "Saturday" :
             System.out.println("It is day number-: 6");
             break;
            case "Sunday" :
             System.out.println("It is day number-: 7");
             break;
            default:
             System.out.println("It is wrong day.");
            }
    }
}