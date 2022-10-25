#include<stdio.h>

void main()
{
 int rono;
 char subtopdef[20];
 float math,sci,eng,total,per;
 
 printf("Enter the roll no:\n");
 scanf("%d",&rono);
 
 printf("Enter the subtopdef:\n");
 scanf("%s",subtopdef);

 printf("Enter the math:\n");
 scanf("%f",&math);

 printf("Enter the sci marks:\n");
 scanf("%f",&sci);

 printf("Enter the eng marks:\n");
 scanf("%f",&eng);
 
 total = math + sci + eng;
 
 printf("Total Is=%f\n",total);
 per = total/3;
 
 printf("Percentage is=%f\n",per);
 
 if(per<40)
 {
  printf("Fall\n");
 }
 else if(per<50 && per>40)
 {
  printf("Grade C\n");
 }
 else if(per<60 && per>50)
 {
  printf("Grade B\n");
 }
 else if(per<70 && per>60)
 {
  printf("Grade A\n");
 }
 else 
 {
  printf("Dist\n");
 }
 if(math < 35 || sci < 35 || eng < 35)
 {
   printf("Fail\n");
 }
 else
 {
   printf("Pass\n");
 }
 
 
}
