#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 putpixel(100,100,WHITE);
 getch();
 closegraph();
 
 return 0;
}
