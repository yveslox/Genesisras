import java.util.Scanner;

class twonumb {

  public static void main(String args[])
  {
   Scanner input = new Scanner(System.in);
   System.out.println("Enter First number");
   int x= input.nextInt();
   
   System.out.println("Enter second number");
   int y = input.nextInt();
   
   int sum= x + y;
   System.out.println("Sum is :"+sum);
  }
  
}
