
class outer
{
  
  class inner
  {
    private int x = 10;
    public int getx()
    {
        return x;
    }
  }

  public inner createinner()
  {
    return new inner();
  }
  
  public void show()
  {
    inner inr = createinner();
    System.out.println("x = "+inr.getx());
  }
}


class factory_method
{
/**Main function**/
 public static void main(String args[])
{
    outer otr = new outer();
    otr.show();
}
}

