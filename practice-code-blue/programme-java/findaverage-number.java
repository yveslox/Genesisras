import java.util.Scanner;

class findaveragenumber
{
 public static void main(String args[])
 {
  System.out.println("Input 5 numbers: ");
  Scanner input = new Scanner("Syteme.in");
  int i= 1;
  int sum = 0;
  
  while(i<= 5)
  {
   sum = sum + input.nextInt();
   i++;
  }
  
  int avg = sum / 5;
  System.out.println("Average number is : " + avg); 
 }
}
