import java.io.*;
import java.util.Scanner;

class init_2darray
{
/**Main function**/
 public static void main(String args[])
{
 int i,j;
 
 double a[][] = {{0*0,1*0,2*0,3*0},
                 {0*1,1*1,2*1,3*1},
                 {0*2,1*2,2*2,3*2},
                 {0*3,1*3,2*3,3*3}};


 System.out.println("2D array with expression : ");
 for(i = 0;i<4;i++)
 {
    for(j = 0;j<4;j++)
        System.out.print(a[i][j]+" ");
    System.out.println();    
 }
}
}