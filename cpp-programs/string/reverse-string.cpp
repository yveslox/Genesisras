#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char str1[25],str2[25];
int i,j,l;

cout<<"Enter a string : ";
fgets(str1,24,stdin);

for(i=0;str1[i]!='\0';i++)
l=i;

for(i=0,j=l-1;j>=0;j--,i++)
{
 str2[i] = str1[j];
}
str2[i] = '\0';

puts(str2);
}
