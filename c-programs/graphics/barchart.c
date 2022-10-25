#include<stdio.h>
//#include<stdlib.h>
#include<graphics.h>
//#include<curses.h>

#define SANS_SERIF_FONT 2
#define HORIZ_DIR  3
#define LINE_FILL 2

//void setfillstyle(int pattern, int color);



int main()
{
 int gd=DETECT,gm,i,j;
 
 initgraph(&gd,&gm,"c::\\TC\\BGI");
 //outtextxy(23,23,"Arc example");
 cleardevice();
 
 setcolor(YELLOW);
 rectangle(0,30,639,450);
 
 setlinestyle(SANS_SERIF_FONT, HORIZ_DIR,2);
 setcolor(WHITE);
 
 outtextxy(275,0,"bar Chart");
 
 setlinestyle(1,SOLID_LINE,0.2);
 
 line(100,420,100,60);
 line(100,420,600,420);
 line(90,70,100,60);
 line(110,70,100,60);
 line(590,410,600,420);
 line(590,430,600,420);

 outtextxy(95,35,"Y");
 outtextxy(610,405,"X");
 outtextxy(85,415,"O");

 //setfillstyle(LINE_FILL,BLUE);
 bar(150,100,200,419);
 
 //setfillstyle(LINE_FILL,RED);
 bar(225,150,275,419);
 
 //setfillstyle(LINE_FILL,GREEN);
 bar(300,200,350,419);

 //setfillstyle(LINE_FILL,MAGENTA);
 bar(315,125,425,419);
 
 //setfillstyle(LINE_FILL,BROWN);
 bar(450,175,500,419);

 getch();
 closegraph();
 
 return 0;
}
