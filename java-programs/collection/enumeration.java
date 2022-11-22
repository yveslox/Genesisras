import java.util.Iterator;
import java.util.Vector;
import java.util.Enumeration;

public class enumeration 
 {
     public static void main(String args[])
     {
        Vector<String> v = new Vector<String>();

        v.add("P");
        v.add("A");
        v.add("T");
        v.add("E");
        v.add("L");

        Enumeration e = v.elements();

        while(e.hasMoreElements())
        {
            System.out.print(e.nextElement() + " ");
        }
        System.out.println();
     }
 }