import java.util.Iterator;
import java.util.Vector;

public class vector 
 {
     public static void main(String args[])
     {
        Vector<String> v = new Vector<String>();

        v.add("P");
        v.add("A");
        v.add("T");
        v.add("E");
        v.add("L");

        Iterator i = v.iterator();
        while(i.hasNext())
        {
            System.out.print(i.next() + " ");
        }
        System.out.println();
     }
 }