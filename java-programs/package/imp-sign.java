import java.util.*;


class  imp_sign
{
    public static void main(String args[])
    {
        Double r,a;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter radius :");
        r = sc.nextDouble();

        a = 3.14 * r * r;

        System.out.println("Area of circle : "+a);
    }
}