//import java.util.scanner;
import java.util.*;
import java.util.Random;

class random_num 
{
    public static void main(String args[])
    {
        int i;
        Random r =new Random();
        
        System.out.println("5 random numbers : ");
        for(i=1;i<=5;i++)
        System.out.println(r.nextInt(50));        
    }
}