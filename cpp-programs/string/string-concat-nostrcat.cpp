#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char str1[50] ="C++ ";

char str2[] = " Programming exemples";
int i,l;

for(i=0;str1[i]!='\0';i++)
  l = i;
  
for(i=0;str2[i]!='\0';i++)
  str1[l+i] = str2[i];
str1[l+i] ='\0';

cout<<" str1 = "<<str1<<endl;
cout<<" str2 = "<<str2<<endl;
}
