#include<stdio.h>

void main()
{
 int ispalindrome(int);
 int n;
 
 printf("Enter number:");
 scanf("%d",&n);
 
 if(ispalindrome(n)==1)
 {
  printf("%d is palindrome\n",n);
 }
 else
 {
  printf("%d is not palindrome\n",n);
 }
 
}

int ispalindrome(int m)
{
 int rev=0,temp;
 temp=m;
 while(m>0)
 {
  rev = rev *10 + m % 10;
 }
 if(temp==rev) 
 return (1);
 else 
 return (0);
}
