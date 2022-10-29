
class  strack_trace
{
    public static void main(String args[])
    {
        int d,a;
        try 
        {
            d = 0;
            a = 10;
            System.out.println("This will not be printed.");
        } 
        catch (ArithmeticException e) 
        {
            // TODO: handle exception
            System.out.println("Division by zero arithmetic exception");
        }
        System.out.println("After catch statement.");
    }

}