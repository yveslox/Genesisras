#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 outtextxy(220,110,"elipse");
 ellipse(180,200,0,360,100,50);
 fillellipse(400,200,100,50);
 getch();
 closegraph();
 
 return 0;
}
