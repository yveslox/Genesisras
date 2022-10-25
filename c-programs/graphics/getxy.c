#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,x,y;
 char p[100];
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 x = getx();
 y = gety();
 sprintf(p,"current position of x: %d and y:%d",x,y);
 outtext(p);
 
 moverel(1,200);
 x = getx();
 y = gety();
 sprintf(p,"current position of x: %d and y:%d",x,y);
 outtext(p);
 
 getch();
 closegraph();
 
 return 0;
}
