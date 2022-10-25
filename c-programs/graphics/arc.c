#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\turboc3\\bgi");
 outtextxy(23,23,"Arc example");
 arc(300,350,0,90,100);
 getch();
 closegraph();
 
 return 0;
}
