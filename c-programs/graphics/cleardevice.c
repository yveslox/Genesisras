#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm;
 
 initgraph(&gd,&gm,"c::\\ TC \\ BGI");
 outtext("Press any key to clear the screen.");
 //line(20,32,215,32);
 getch();
 cleardevice();
 outtext("Press any key to exit...");
 getch();
 closegraph();
 
 return 0;
}
