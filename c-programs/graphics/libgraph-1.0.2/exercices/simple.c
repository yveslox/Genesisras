#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\turboc3\\bgi");
 outtextxy(23,23,"Welcome to C graphics");
 line(20,32,215,32);
 getch();
 delay(500000);
 closegraph();
 
 return 0;
}
