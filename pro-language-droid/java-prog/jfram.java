
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


class jframe
{
    public static void main(String args[])
    {
       
      hello obj = new hello();
      obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}

class hello extends JFrame{
    JLabel label = new JLabel("Hello wolrd"); 
    hello()
    {
      super("Your title here");
      this.add(label);
      this.setVisible(true);
      this.setSize(200,200);
    }
}

