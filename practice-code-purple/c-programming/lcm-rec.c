#include<stdio.h>


int find_lcm(int,int);


int main()
{
    int a,b,lcm;

    printf("Enter 2 integers fo find lcm of : \n");
    scanf("%d%d",&a,&b);

    lcm = find_lcm(a,b);
    
    printf("Lcm of %d and %d is : %d\n",a,b,lcm);

    return 0;
}

int find_lcm(int a,int b)
{
    
    static int temp = 1;
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }    
}
