
class  throws_ex
{

    static void throwOne() throws IllegalAccessException
    {
        System.out.println("Caught inside demoproc.");
        throw new IllegalAccessException("demo");
          
    }
    public static void main(String args[])
    {
        try 
        {
            throwOne();
        } 
        catch (IllegalAccessException e) 
        {
            // TODO: handle exception
            System.out.println("Recaught : "+e);
        }
    }

}