#include<stdio.h>

int main()
{
 int a,b,s,hcf,i,lcm;
 
 printf("Enter two numbers:\n");
 scanf("%d %d",&a,&b);
 
 if(a < b)
    s = a;
 else 
    s = b;
 for(i=1;i<= s;i++)
 {
  if((a%i == 0) && (b%i == 0))
  {
    hcf = i;
  }
 }
 
 printf("The Hcf of given Numbers is = %d\n",hcf);
 lcm = (a * b) / hcf;
 printf("The Lcm of given Numbers is = %d\n",lcm);
 
 return 0;
}
