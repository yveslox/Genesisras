#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,x,y;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 x =getmaxx()/2;
 y =getmaxy()/2;
 for(i =30;i<200;i++)
 {
  delay(100);
  setcolor(i/10);
  arc(x,y,0,180,i-10);
 }
 getch();
 closegraph();
 
 return 0;
}
