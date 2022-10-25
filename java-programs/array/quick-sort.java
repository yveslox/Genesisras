import java.io.*;
import java.util.Scanner;

class quick_sort
{
 /**sorting function **/      
 public static void sort(int[] arr)
 {
    quickSort(arr,0,arr.length-1);
 }


/**quick sort function **/
 public static void quickSort(int arr[],int low,int high)
 {
    int i = low,j = high;
    int temp;
    int pivot = arr[(low+high)/2];

    /**partition**/
    while(i<=j)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;
        if(i<=j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }
    /**recursively sort lower half **/
    if(low<j)
    quickSort(arr,low,j);
    /**recursively sort  upper half **/
    if(i<high)
    quickSort(arr,i,high);
 }

 /**Main function**/
 public static void main(String args[])
{
        
        Scanner scan = new Scanner(System.in);
        
        int n,i;

        System.out.println("Enter number of integer : ");
        n =  scan.nextInt();

        int arr[] = new int [n];
         
        System.out.println("Enter "+n+" integer elements");
        for(i=0;i<n;i++)
        arr[i] = scan.nextInt();

        sort(arr); 

        System.out.println("Elements after sorting ");
        for(i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        System.out.println();
                
}
}