import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;

class adap extends JFrame
{
String details;
JLabel statusbar;

adap()
{
super("Your Title here");
statusbar = new JLabel("Sample Text");
add(statusbar, BorderLayout.SOUTH);
addMouseListener(new Mouseclass());
this.setVisible(true);
this.setSize(300,300);
}

class Mouseclass extends MouseAdapter
{
public void mouseClicked(MouseEvent event)
{
details += String.format("Clicked %dtimes", event.getClickCount());

if(event.isMetaDown())
{
  details+="With right mouse button";
}
else if(event.isAltDown())
{
  details+="With center mouse button";
}
else
{
  details+="with left mouse button";
}
statusbar.setText(details);
}
}
}


class adapter
{
public static void main(String args[])
 {
   adap obj= new adap();
   obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 }
}

