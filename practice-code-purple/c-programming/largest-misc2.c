 #include<stdio.h>

 int main()
 {
    double a,b,c;
    printf("Enter 3 numbers: \n");
    scanf("%lf%lf%lf",&a,&b,&c);

    if(a>= b && a>= c)
    {
        if(b>=c)
        {
         printf("%.2lf is the 2nd largest number\n",b);
        }
        else
        {
         printf("%.2lf is the 2nd largest number\n",c);
        }
        
    }
    else if(b>=a && b >= c)
    {
     if(a>=c)
     {
      printf("%.2lf is the 2nd largest number\n",a);
     }
     else
     {
      printf("%.2lf is the 2nd largest number\n",c);
     }
    }

    else if(a>=b)
    {
    printf("%.2lf is the 2nd largest number\n",a);
    }
    else
    {
    printf("%.2lf is the 2nd largest number\n",b);
    }
    
    return (0);
 }