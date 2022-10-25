#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\turboc3\\bgi");
 //outtextxy(23,23,"Arc example");
 cleardevice();
 bar3d(100,100,200,200,20,1);
 getch();
 closegraph();
 
 return 0;
}
