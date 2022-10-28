
class  using_class2
{
    public static void main(String args[])
    {
        Double r,a;
        java.util.Scanner sc = new java.util.Scanner(System.in);

        System.out.print("Enter radius :");
        r = sc.nextDouble();

        a = 3.14 * r * r;

        System.out.println("Area of circle : "+a);
    }
}