#include<stdio.h>

void fibonacci(int num);

int main()
{
    int num = 0;
    
    printf("Enter the number of terms : ");
    scanf("%d",&num);
    
    fibonacci(num);
    printf("\n");   
    return 0;
}

void fibonacci(int num)
{
  int a,b,c,i = 3;

  a = 0;
  b = 1;

  if(num ==1)
  printf("%d",a);

  if(num>=2)
  printf("%d\t%d",a,b);

  while(i <= num)
  {
    c = a + b;
    printf("\t%d",c);
    a = b;
    b = c;
    i++;
  }
}