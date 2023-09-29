
import java.util.*;

class array_sum 
{
    public static void main(String args[])
    {
        int arr[]={0,10,20,30,40,50,60};
        int sum = 0;
        int i = 0;
        for(i=0;i<7;i++)
        {
            sum =sum +arr[i];
        }
        System.out.println(sum);        
    }
}