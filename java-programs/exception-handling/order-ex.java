
class  order_ex
{
    public static void main(String args[])
    {
        try 
        {
            int a = 0;
            int b = 10/a;
        } 
        
        catch (ArithmeticException e) 
        {
            // TODO: handle exception
            System.out.println("This is nerver reached.");
        }
    }

}