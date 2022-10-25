#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\turboc3\\bgi");
 outtextxy(23,23,"Multiple line programme");
 for(i=200;i<400;i=i+10)
 {
  line(i,100,i,300);
 }
 for(j=110;i<300;j=j+10)
 {
  line(190,j,400,j);
 } 
 getch();
 //delay(500000);
 closegraph();
 
 return 0;
}
