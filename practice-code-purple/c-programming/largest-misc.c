 #include<stdio.h>

 int main()
 {
    float a,b,c;
    printf("Enter 3 numbers: \n");
    scanf("%f%f%f",&a,&b,&c);

    if(a>= b && a>= c)
    {
        printf("Largest number = %.3f\n",a);
    }
    else if(b>=a && b >= c)
    {
     printf("Largest number is = %.3f\n",b);
    }
    else
    {
    printf("Largest number is = %.3f\n",c);
    }
    
    return (0);
 }