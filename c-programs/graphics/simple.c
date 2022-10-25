#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\turboc3\\bgi");
 outtextxy(23,23,"Welcome to C graphics");
 line(20,32,215,32);
 closegraph;
 printf("\n");
}
