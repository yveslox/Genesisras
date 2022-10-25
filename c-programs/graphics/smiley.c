#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 circle(300,220,150);
 circle(300,220,150);
 circle(300,220,150);
 arc(300,220,200,340,120);
 line(188,262,412,262);
 
 //sound(700);
 delay(2000);
 //nosound(); 
 getch();
 closegraph();
 
 return 0;
}
