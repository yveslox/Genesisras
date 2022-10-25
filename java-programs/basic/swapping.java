class swapping
{      
    public static void main(String args[])
    { 
      int a,b,t;

      a = 10;
      b = 20;

      System.out.println("Before sapping : "+ a + " "+ b);

      t = a;
      a = b;
      b = t;

      System.out.println("After sapping : "+ a + " "+ b);

    }
    static String msg;
}