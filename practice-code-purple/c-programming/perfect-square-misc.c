#include<stdio.h>
#include<math.h>

int main()
{
    int i,number;

    printf("Enter a number : \n");
    scanf("%d",&number);
    
    for(i = 0;i<= number;i++)
    {
        if(number == i*i)
        {
            printf("%d is a perfect square\n",number);

            return (0);
        }
    }

    printf("%d is not a perfect square\n",number);
}
