import java.io.*;
import java.util.Scanner;

class sum_matrix
{
/**Main function**/
 public static void main(String args[])
{
 int i,j;
 int c[][] = new int [3][3];
 int a[][] = {{1,2,3},{4,5,6},{7,8,9}};
 int b[][] = {{9,8,7},{6,5,4},{3,2,1}};

 System.out.println("Matrix -A: ");
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(a[i][j]+" ");
    System.out.println();    
 }

System.out.println("Matrix -B: ");
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(b[i][j]+" ");
    System.out.println();    
 }

for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
      {
        c[i][j] = a[i][j] + b[i][j];
      }
            
 }

 System.out.println("Sum of matrix is : ");
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(c[i][j]+" ");
    System.out.println();    
 }
}
}