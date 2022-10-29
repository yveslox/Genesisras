import java.util.Scanner;
import static java.lang.Math.PI;

class  static_imp2
{
    public static void main(String args[])
    {
        double r,a;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter radius : ");
        r = sc.nextDouble();

        a = PI * r * r ;

        System.out.println("Area of crircle : "+a);
    }
}