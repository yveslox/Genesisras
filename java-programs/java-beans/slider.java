//package sunw.demo.ClickCounter;

import java.awt.*;
import java.awt.event.*;

class slider extends Canvas
 {
    int c;
    public slider()
    {
        addMouseListener(new MouseAdapter()
        {
            public void mousePressed(MouseEvent me)
            {
                Counter();
            }
        });
        c = 0;
        setSize(100,100);
    }
    

    public void Counter()
    {
        c++;
        repaint();
    }
     
     public static void main(String args[])
     {
        //Dimension d = getSize();
        //int h = d.height;
        //int w = d.width;
        //g.setColor(new Color(100,100,100));
        //g.fillRect(0,0,w,h);
        //g.setColor(new Color(0,0,0));
        //g.drawString("Counter : "+c,20, c, 50);
        System.out.println();
     }
 }