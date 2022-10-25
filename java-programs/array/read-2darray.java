import java.io.*;
import java.util.Scanner;

class read_2darray
{
/**Main function**/
 public static void main(String args[])
{
 int i,j;
 int a[][] = new int[2][3];
 Scanner sc= new Scanner(System.in);
 for(i = 0;i<2;i++)
 {
    for(j = 0;j<3;j++)
    {
        System.out.print("Enter value : ");
        a[i][j] = sc.nextInt();
    }
 }
 
 System.out.println("Matrix -A : ");
 for(i = 0;i<2;i++)
 {
    for(j = 0;j<3;j++)
        System.out.print(a[i][j]+" ");
    System.out.println();    
 }
}
}