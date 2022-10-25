#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm,i,j=0;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 
 //sound(700);
 delay(500);
 //nosound(); 
 setcolor(6);
 rectangle(225,125,355,155);
 
 while(j<=23)
 {
  for(i=0;i<123;i++)
    outtextxy(225+i,125+j,"û");
  j++;
 }
 
 delay(500);
 
 setcolor(7);
 rectangle(225,155,355,185);
 j = 0;
 
 while(j<=23)
 {
  for(i=0;i<123;i++)
    outtextxy(225+i,155+j,"Û");
  j++;
 }
 
 delay(500);
 
 setcolor(2);
 rectangle(225,185,355,215);
 j = 0;
 
 while(j<=23)
 {
  for(i=0;i<123;i++)
    outtextxy(225+i,185+j,"Û");
  j++;
 }
 
 delay(500);
 
 setcolor(9);
 rectangle(220,120,255,440);
 j = 0;
 
 while(j<=312)
 {
  for(i=0;i<123;i++)
    outtextxy(220+i,120+j,"Û");
  j++;
 }
 
 delay(500);
 rectangle(200,440,245,450);
 
 delay(500);
 rectangle(190,450,260,460);
 
 delay(500);
 rectangle(175,460,275,470);

 delay(500);
 circle(290,170,13);
 
 delay(500);
 line(290,158,290,184);

 delay(500);
 line(279,171,301,171);
 
 delay(500);
 line(281,160,299,180);
 
 delay(500);
 rectangle(281,180,299,160);

 delay(500);
 setlinestyle(440,245,450);

 delay(500);
 setcolor(5);

 delay(1000);
 
 getch();
 closegraph();
 
 return 0;
}
