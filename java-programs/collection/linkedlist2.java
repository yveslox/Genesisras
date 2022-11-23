
import java.util.ArrayList;
import java.util.ListIterator;
import java.util.LinkedList;

class linkedlist2 
 {
     public static void main(String args[])
     {
        LinkedList <String> llist = new LinkedList<String>();

        llist.add("1");
        llist.add("2");
        llist.add("3");
        llist.add("4");
        llist.add("5");

        
        ListIterator itr = llist.listIterator();

        System.out.println();
        System.out.print("Forward direction : ");

        while(itr.hasNext())
        {
            System.out.print(itr.next() + " ");
        }
        
        System.out.println();
        System.out.print("Reverse direction : ");

        while(itr.hasPrevious())
        {
            System.out.print(itr.previous()+ " ");
        }
        System.out.println();
     }
 }