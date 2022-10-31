
class  chained_ex
{
    static void demoproc()
    {
        NullPointerException e = new NullPointerException("Top layer");
        e.initCause(new ArithmeticException("cause"));
        throw e;
    }

    public static void main(String args[])
    {
        try 
        {
            demoproc();
        } 
        catch (NullPointerException e) 
        {
            // TODO: handle exception
            System.out.println("Caught : "+e);
            System.out.println("Original cause : "+e.getCause());
        }
    }
}