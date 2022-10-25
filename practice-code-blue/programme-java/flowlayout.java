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
  super("Your Title Here");
  statusbar = new JLabel("Sample text");
  add(statusbar, BordeLayout.SOUTH);
  addMouseListerner(new Mouseclass());
  this.setVisible(true);
  this.setSize(300, 300);
 }
 
 class Mouseclass extends MouseAdapter
 {
  public void mouseClicked(MouseEvent event)
  {
  details = String.format("Clicked %d times ",event.getClickCount());
  
  if(event.isMetaDown())
  {
   details +="with right mouse button";
  }
  else if(event.isAltDown())
  {
  details +="with centre mouse button";
  }
  else
  {
  details +="with left mouse button";
  }
  statusbar.setText(details); 
  }
 }
}


class Adapter
{
 public static void main(String args[])
 {
  adap obj = new adap();
  obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
 }
}
