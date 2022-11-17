import java.io.*;
import java.util.*;
import javax.swing.JOptionPane;

class inputdialog     
 {       
     public static void main(String args[]) 
     {
      
      int a = 0, b = 0, t;
    
        a = Integer.parseInt(JOptionPane.showInputDialog("Enter first number : "));
        
        b = Integer.parseInt(JOptionPane.showInputDialog("Enter second number : "));
      
      JOptionPane.showMessageDialog(null,"#Before swapping : "+ a + " "+ b);

      a = a + b;
      b = a - b;
      a = a - b;
      
      JOptionPane.showMessageDialog(null,"#After swapping : "+ a + " "+ b);

    }
 }