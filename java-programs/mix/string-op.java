class string_op
{
    public static void main(String args[])
    {
      String s = "now is the time for allgood man"+ "to become aid to country";
      System.out.println(s);

      System.out.println(" Indexof(t) = "+s.indexOf('t'));
      System.out.println(" lastIndexof(t) = "+s.lastIndexOf('t'));

      System.out.println(" Indexof(the) = "+s.indexOf("the"));
      System.out.println(" lastIndexof(the) = "+s.lastIndexOf("the"));

      System.out.println(" Indexof(t,10) = "+s.indexOf('t',10));
      System.out.println(" lastIndexof(t,60) = "+s.lastIndexOf('t',60));

      System.out.println(" Indexof(the,10) = "+s.indexOf("the",10));
      System.out.println(" lastIndexof(the,60) = "+s.lastIndexOf("the",60));
    }
}