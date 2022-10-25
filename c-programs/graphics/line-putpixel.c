#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 for(i=0;i<100;i++)
 {
 putpixel(50+i,250+i,WHITE);
 }
 getch();
 closegraph();
 
 return 0;
}
