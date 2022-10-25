#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 outtextxy(220,110,"rectangle");
 
 rectangle(40,40,100,100);
 for(i=42;i<100;i+=2)
 {
  for(j=42;j<100;j+=2)
  putpixel(i,j,RED);
 }
 getch();
 closegraph();
 
 return 0;
}
