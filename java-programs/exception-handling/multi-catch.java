
class  multi_catch
{
    public static void main(String args[])
    {
        try 
        {
            int a = args.length;
            System.out.println("a ="+a);
            int b = 10/a;
            int c [] = {1};
            c[10] = 100;
        } 
        catch (ArithmeticException e) 
        {
            // TODO: handle exception
            System.out.println("Divide by 0: "+e);
        }
        catch (ArrayIndexOutOfBoundsException e) 
        {
            // TODO: handle exception
            System.out.println("Divide by 0: "+e);
        }
        System.out.println("After try/catch blocks.");
    }

}