#include<stdio.h>

int main()
{
 int a,b,g,hcf,i,lcm;
 
 printf("Enter two numbers:\n");
 scanf("%d %d",&a,&b);
 
 if(a > b)
    g = a;
 else 
    g = b;
    
 for(i=g;i<=(a *b);i++)
 {
  if((i%a == 0) && (i%b == 0))
  {
    lcm = i;
    break;
  }
 }
 
 printf("The Lcm of given Numbers is = %d\n",lcm);
 hcf = (a * b) / lcm;
 printf("The Hcf of given Numbers is = %d\n",hcf);
 
 return 0;
}
