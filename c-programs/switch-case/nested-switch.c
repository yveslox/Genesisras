#include<stdio.h>
#include<stdlib.h>

void main()
{
 int choice,ch1,ch2;
 
 printf("1.Pen \n2.Fruits\n");
 printf("Enter value of choice:>>\n");
 
 scanf("%d",&choice);
 
 switch(choice)
 {
    case 1:
    {
     printf("1.micro\n2.renold\n3.cello:\n");
     printf("Enter the value of ch1:>>\n");
     scanf("%d",&ch1);
     switch(ch1)
     {
       case 1:
       {
         printf("Micro\n");
         break;
       }
       case 2:
       {
         printf("Renold\n");
         break;
       }
       case 3:
       {
         printf("Cello\n");
         break;
       }
       default:
       {
         printf("Invalid case\n");
       }
    }
    break;
    }
    
    case 2:
    {
     printf("1.mango\n2.orange\n3.pineapple:\n");
     printf("Enter the value of ch2:>>\n");
     scanf("%d",&ch2);
     switch(ch2)
     {
       case 1:
       {
         printf("Mango\n");
         break;
       }
       case 2:
       {
         printf("Orange\n");
         break;
       }
       case 3:
       {
         printf("Pineapple\n");
         break;
       }
       default:
       {
         printf("Invalid case\n");
       }
    }
    break;
    }
    default:
    {
     printf("Invalid choice\n");
    }
    
 }
}
