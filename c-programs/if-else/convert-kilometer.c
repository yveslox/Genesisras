#include<stdio.h>

int main()
{
 float km;
 
 int v;
 float ans;
 
 printf("Enter distance in K.M :\n");
 scanf("%f",&km);
 
 printf("1 for meter 2 for centimeter 3 for mm:\n");
 fflush(stdin);
 scanf("%d",&v);
 
 if(v == 1)
 {
  ans = km*1000;
 }
 
 if(v==2)
 {
  ans =km*100000;
 }
 
 if(v == 3)
 {
  ans = km*1000000;
 }
 
 printf("Answer : %.2f\n",ans);
 return 0;
}
