#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#define CENTER_TEXT 4
#define HORIZ_DIR 2
#define DEFAULT_FONT 1

int main()
{
 int gd=DETECT,gm,i;
 char a[5];
 initgraph(&gd,&gm,"c::\\Turbo\\BGI");
 
 //settextjustify(CENTER_TEXT,CENTER_TEXT);
 setlinestyle(DEFAULT_FONT, HORIZ_DIR,3);
 setcolor(RED);
 
 for(i= 30;i>=0;i--)
 {
  sprintf(a,"%d",i);
  outtextxy(getmaxy()/2,getmaxy()/2,a);
  delay(1000);
  
  if(i == 0)
  break;
  cleardevice();
 }
 getch();
 closegraph();
 return 0;
}
