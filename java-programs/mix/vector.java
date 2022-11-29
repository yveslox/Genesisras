import java.util.Vector;

class vector_ex
{
    public static void main(String args[])
     {
      Vector v = new Vector();

      System.out.println(v.capacity());

      for(int i=0;i<100;i++)
      {
        v.add(i,"india"+i);
      }

      System.out.println(v);
      System.out.println(v.indexOf(100));
      System.out.println(v.size());
      System.out.println(v.capacity());
    }
}