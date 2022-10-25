#include<stdio.h>

void main()
{
int len=0,i,vowel=0;

char arr[100],ch;

printf("Enter any string:");
fflush(stdin);

fgets(arr,sizeof(arr),stdin);

while(arr[len]!='\0')
{
 len++;
}

for(i=0;i<=len;i++)
{
 ch=arr[i];
 if(ch=='A'||ch=='E'||ch=='U'||ch=='O'||ch=='I'||ch=='a'||ch=='e'||ch=='u'||ch=='o'||ch=='i')
 {
  vowel++;
 }
}
printf("Total vowel is: %d\n" ,vowel);
}
