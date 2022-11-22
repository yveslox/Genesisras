
import java.util.ArrayList;
import java.util.ListIterator;

public class arraylist2 
 {
     public static void main(String args[])
     {
        ArrayList <String> alist = new ArrayList<String>();

        alist.add("1");
        alist.add("2");
        alist.add("3");
        alist.add("4");
        alist.add("5");

        ListIterator<String> listItr = alist.listIterator();
        
        System.out.print("Elements are : ");
        while(listItr.hasNext())
        {
         System.out.print(listItr.next()+" ");
        }
        System.out.println();
     }
 }