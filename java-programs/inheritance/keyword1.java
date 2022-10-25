class n 
{
  public int i;
  int getI()
  {
    return i;
  }
}

class M extends n
{
    int a,b;
    void sum(int a,int b)
    {
        int d =getI();
        this.a = a;
        this.b = b;
        System.out.println("Sum is : "+(d+a+b));
    }
}


class keyword
{
    public static void main(String args[])
    {
        M k = new M();
        k.i = 10;
        k.sum(4,5);
    
    }
}