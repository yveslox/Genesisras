class swapping2
{      
    public static void main(String args[])
    { 
      int a,b,t;

      a = 10;
      b = 20;

      System.out.println("Before sapping : "+ a + " "+ b);

      a = a + b;
      b = a - b;
      a = a - b;

      System.out.println("After sapping : "+ a + " "+ b);

    }
    static String msg;
}