#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\turboc3\\bgi");
 //outtextxy(23,23,"Arc example");
 //cleardevice();
 //bar(100,150,250,200);
 outtextxy(23,23,"circle");
 setcolor(3);
 circle(300,225,100);
 floodfill(300,225,CYAN);
 getch();
 closegraph();
 
 return 0;
}
