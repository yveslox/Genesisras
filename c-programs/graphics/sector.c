#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 sector(200,200,0,150,25,50);
 getch();
 closegraph();
 
 return 0;
}
