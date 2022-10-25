import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.*;

class jlist
{
  public static void main(String args[])
  {
   JListClass obj = new JListClass();
   obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
}

class JListClass extends JFrame
{
private JList list;
private static String colornames[]={"black","blue","red","white"};

private static Color colors[]={Color.black,Color.blue,Color.red,Color.white};
         
sel selsel= new sel();

JListClass()
{
 super("Your Title here");
 setLayout(new FlowLayout());
 list= new JList(colornames);
 list.setVisibleRowCount(4);
 list.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
 add(new JScrollPane(list));

 this.setVisible(true);
 this.setSize(300,300);
 list.addListSelectionListener(selsel);
}

class sel implements ListSelectionListener
{
    public void valueChanged(ListSelectionEvent event)
    {
    getContentPane().setBackground(colors[list.getSelectedIndex()]);
    }
}
}
