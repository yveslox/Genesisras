import java.io.*;
import java.util.Scanner;

class transpose_matrix2
{
/**Main function**/
 public static void main(String args[])
{
 int i,j;
 int temp;
 int a[][] = {{1,2,3},{4,5,6},{7,8,9}};

 System.out.println("Matrix : ");
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(a[i][j]+" ");
    System.out.println();    
 }

for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
      if(i<=j)
      {
        temp = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = temp;
      }
            
 }

 System.out.println("Matrix transpose : ");
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(a[i][j]+" ");
    System.out.println();    
 }
}
}