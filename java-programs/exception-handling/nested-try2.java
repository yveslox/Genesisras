
class  nested_try2
{
    public static void main(String args[])
    {
        try 
        {
            int a = args.length;
            int b = 10/a;
            System.out.println("a = "+a);
            try
            {
                if(a==1)
                  a = a /(a-a);
                if(a == 2)
                {
                    int c [] = {1};
                    c[10] = 100;
                }    
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println("Array index out-of-bounds: "+e);
            }
        } 
        catch (ArithmeticException e) 
        {
            // TODO: handle exception
            System.out.println("Divide by 0 : "+e);
        }
    }

}