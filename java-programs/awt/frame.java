import java.awt.*;
import java.awt.event.*;

 class frametest extends Frame implements ActionListener     
 {    
     TextField tf;

     Button b;

     String s = "";


     public  void frametest()
     { 
       tf = new TextField(10);
       b = new Button("show");

       add("North",tf);
       add("South",b);

       b.addActionListener(this);
       setSize(300,200);
       setVisible(true);

       addWindowListener(new WindowAdapter()
       {
        public void windwClosing(WindowEvent e)
        {
            System.exit(0);
        }
       });
     }

    public void actionPerformed(ActionEvent ae)
    {
        s = tf.getText();
        repaint();
    }

    public void paint(Graphics g)
    {
        g.drawString(s,100,100);
    }

    public static void main(String[] args)
    {
        frametest f =  new frametest();
    }
 }