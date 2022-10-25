import java.io.*;
import java.util.Scanner;

class jagged_array
{
/**Main function**/
 public static void main(String args[])
{
 int i,j,x = 1;
 int ar[][] = new int[4][];
 
 ar[0] = new int [1];
 ar[1] = new int [2];
 ar[2] = new int [3];
 ar[3] = new int [4];

for(i = 0;i<ar.length;i++)
 {
    for(j = 0;j<ar[i].length;j++)
    {
        ar[i][j] = x;
        x++;
    }    
 }

 System.out.println("Jagged array : ");
 for(i = 0;i<ar.length;i++)
 {
    for(j = 0;j<ar[i].length;j++)
        System.out.print(ar[i][j]+" ");
    System.out.println();    
 }
}
}