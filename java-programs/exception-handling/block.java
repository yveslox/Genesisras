
class  block
{

    static void procA()
    {
        try
        {
          System.out.println("Inside procA");
          throw new RuntimeException("demo");
        }
        finally
        {
            System.out.println("ProcA's finally");
        }
    }

    static void procB()
    {
        try
        {
          System.out.println("Inside procB");
          return;
        }
        finally
        {
            System.out.println("ProcB's finally");
        }
    }

    static void procC()
    {
        try
        {
          System.out.println("Inside procC");
          return;
        }
        finally
        {
            System.out.println("ProcC's finally");
        }
    }

    public static void main(String args[])
    {
        try 
        {
            procA();
        } 
        catch (Exception e) 
        {
            // TODO: handle exception
            System.out.println("Exception caught : ");
        }
        procB();
        procC();
    }
}