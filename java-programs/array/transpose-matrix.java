import java.io.*;
import java.util.Scanner;

class transpose_matrix
{
/**Main function**/
 public static void main(String args[])
{
 int i,j;
 int b[][] = new int[3][3];
 
 int a[][] = {{1,2,3},{4,5,6},{7,8,9}};

for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        b[i][j] = a[j][i];    
 }

 System.out.println("Matrix transpose : ");
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(b[i][j]+" ");
    System.out.println();    
 }
}
}