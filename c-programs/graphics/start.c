#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j,k,l,m,n;
 
 initgraph(&gd,&gm,"c::\\turboc3\\bgi");
 
 while(1)
 {
  cleardevice();
  for(i=1;i<=200;i++)
  {
   m = 0;
   setbkcolor(3);
   putpixel(random(),random(),RED);
  }
  setlinestyle(1,0,8);
  setcolor(8);
  outtextxy(14,200,"Nils Techsys");
  delay(1200);
 }
 getch();
 closegraph();
 
 return 0;
}
