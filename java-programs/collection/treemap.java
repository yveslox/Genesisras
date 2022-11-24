
import java.util.Collection;
import java.util.Iterator;
import java.util.TreeMap;

class treemap 
 {
     public static void main(String args[])
     {
        TreeMap <String, String> treemap = new TreeMap <String,String>();

        treemap.put("1","One");
        treemap.put("2","Two");
        treemap.put("3","Three");
        
        Collection c = treemap.values();
        Iterator itr = c.iterator();

        while(itr.hasNext())
        {
            System.out.print(itr.next()+" ");
        }
        System.out.println();
     }
 }