
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


class joption_pane 
{
    public static void main(String args[])
    {
       
      String s1 = JOptionPane.showInputDialog("Enter first number");
      String s2 = JOptionPane.showInputDialog("Enter second number");
      
      int x = Integer.parseInt(s1);
      int y = Integer.parseInt(s2);
      
      int z = x + y;

      JOptionPane.showMessageDialog(null,"Result is : "+z);
    }
}

