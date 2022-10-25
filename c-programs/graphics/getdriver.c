#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm;
 char * drivername;
 
 initgraph(&gd,&gm,"c::\\ TC \\ BGI");
 drivername = getdrivername();
 outtextxy(200,200,drivername);
 getch();
 delay(50000);
 closegraph();
 
 return 0;
}
