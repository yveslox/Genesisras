#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\turboc3\\bgi");
 //outtextxy(23,23,"Arc example");
 cleardevice();
 line(100,100,500,100);
 circle(200,200,50);
 getch();
 closegraph();
 
 return 0;
}
