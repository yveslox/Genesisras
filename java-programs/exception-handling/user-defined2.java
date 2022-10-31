class negativenumberexception extends Exception
{
  private double num;

  negativenumberexception(double n)
  {
    num = n; 
  }

  public String toString()
  {
    return "Square root of "+ num + " is not possible.";
  }
}

class  exception2
{
    static void numberroot(double n) throws negativenumberexception
    {
        System.out.println("Checking number : ("+n+")");
        if(n<0)
         throw new negativenumberexception(n);
        double r = Math.sqrt(n);
        System.out.println("Square root of "+n+" is "+r+".");
    }

    public static void main(String args[])
    {
        try 
        {
            numberroot(25);
            numberroot(-5);
        } 
        catch (negativenumberexception e) 
        {
            // TODO: handle exception
            System.out.println("Caught : "+e);
        }
    }
}