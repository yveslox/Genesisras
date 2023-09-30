
import java.util.*;

class array_arg 
{
    public static void main(String args[])
    {
        int arr[]=new int[6];
        int i = 0;
        for(i=0;i<arr.length;i++)
        {
            arr[i]=i;
        }
                
        change(arr);
    }
    static void change(int arr[])
    {
        for(int j:arr)
        System.out.println(j+10);
    }

}