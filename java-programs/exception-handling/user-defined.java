class invalidageexception extends Exception
{
  private int age;

  invalidageexception(int a)
  {
    age = a; 
  }

  public String toString()
  {
    return "age : "+ age + " is not a valid age.";
  }
}

class  exception
{
    static void checkage(int age) throws invalidageexception
    {
        System.out.println("Checking age validity : ("+age+")");
        if(age < 0 || age > 100)
         throw new invalidageexception(age);
        System.out.println("Age : "+age+" is a valid age.");
    }

    public static void main(String args[])
    {
        try 
        {
            checkage(25);
            checkage(-5);
        } 
        catch (invalidageexception e) 
        {
            // TODO: handle exception
            System.out.println("Caught : "+e);
        }
    }
}