#include<stdio.h>

void main()
{
 int count1= 0,count2=0,flag= 0,i;
 
 char string1[10],string2[10];
 
 printf("Enter a string:");
 fgets(string1,sizeof(string1),stdin);
 
 printf("Enter a string:");
 fgets(string2,sizeof(string2),stdin);
 
 while(string1[count1] !='\0')
 count1++;
 
 while(string2[count2] !='\0')
 count2++;
 
 i = 0;
 
 while((i< count1) && (i<count2))
 {
  if(string1[i] == string2[i])
  {
   i++;
   continue; 
  }
  if(string1[i] < string2[i])
  {
   flag = -1;
   break; 
  }
  if(string1[i] > string2[i])
  {
   flag = 1;
   break; 
  }
 }
 
 if(flag == 0)
 {
  printf("Both strings are equal\n");
 }
 
 if(flag == 1)
 {
  printf("string1 is greater than string2\n");
 }
 
 if(flag == -1)
 {
  printf("string1 is less than string2\n");
 }
}
