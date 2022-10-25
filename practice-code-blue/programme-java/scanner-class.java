import java.util.Scanner;

class scannerclass
{
public static void main(String args[])
{
Scanner input = new Scanner(System.in);
System.out.println("Enter your name");
String name = input.nextLine();

System.out.println("Enter your age");
int age = input.nextInt();

System.out.println("Hello "+ name);
System.out.println("Your age is "+ age);

}
}
