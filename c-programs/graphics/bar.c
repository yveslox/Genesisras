#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\turboc3\\bgi");
 //outtextxy(23,23,"Arc example");
 cleardevice();
 bar(100,150,250,200);
 getch();
 closegraph();
 
 return 0;
}
