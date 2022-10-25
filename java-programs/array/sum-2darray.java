import java.io.*;
import java.util.Scanner;

class sum_2darray
{
/**Main function**/
 public static void main(String args[])
{
 int i,j,sum = 0;
 int a[][] ={{10,20,30},{40,50,60},{70,80,90}};
 for(i = 0;i<3;i++)
 {
    for(j = 0;j<3;j++)
    {
        sum += a[i][j];
    }
 }
 System.out.println("Sum : "+sum);
}
}