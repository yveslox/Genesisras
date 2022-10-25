import java.io.*;
import java.util.Scanner;

class twodarray
{
/**Main function**/
 public static void main(String args[])
{
 int i,j,x=1;
 int a[][] = new int[2][3];
 
 for(i = 0;i<2;i++)
 {
    for(j = 0;j<3;j++)
    {
        a[i][j] = x;
        x++;
    }
 }
 
 for(i = 0;i<2;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(a[i][j]+" ");
    System.out.println();    
 }
}
}