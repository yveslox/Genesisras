import java.util.*;

class Scanner
{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your name");
        String name = input.nextLine();

        System.out.println("Enter your age");
        int age = input.nextLine();

        System.out.println("Hello "+name);
        System.out.println("Your age "+age);
    }
}