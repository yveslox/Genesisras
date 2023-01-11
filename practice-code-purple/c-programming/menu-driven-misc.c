#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,num,i;
    unsigned long int fact;

    while(1)
    {
        printf("1.Factorial \n");
        printf("2.Prime \n");
        printf("3.Odd\\Even \n");
        printf("4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
            printf("Enter number :\n");
            scanf("%d",&num);

            fact = 1;
            for(i = 1;i<=num;i++)
            {
                fact = fact*i;
            }
            printf("Factorial value of %d is = %lu\n",num,fact);
            break;

            case 2 :
            
            printf("Enter number :\n");
            scanf("%d",&num);
            if(num == 1)
            printf("1 is neither prime nor composite\n");
            
            for(i = 2;i<num;i++)
            {
                if(num%i == 0)
                {
                    printf("%d is not a prime number\n",num);
                    break;
                }
            }
            if(i==num)
            {
                printf("%d is prime number\n",num);
                break;
            }
            
            case 3 :
            
            printf("Enter number :\n");
            scanf("%d",&num);

            if(num%2 == 0)
            printf("%d is an Even number\n",num);
            else 
            printf("%d is an odd number\n",num);
            break;

            case 4 :
            exit(0);        
            }
    }
    return (0);
}