 #include<stdio.h>

 int main()
 {
    int first,second,*p,*q,sum;

    printf("Enter two integers to add using pointers: \n");
    scanf("%d%d",&first,&second);

    p = &first;
    q = &second;
    sum = *p + *q;
    printf("The sum of the entered numbers is: %d\n",sum);
    
    return (0);
 }