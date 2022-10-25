#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char str1[100];
int i,j,k,c = 0,w = 1;

cout<<"Enter sentences :::";
fgets(str1,99,stdin);

i = strlen(str1);

for(i=0 ; str1[i] !='\0' ; i++)
{
 if((str1[i] ==' ')&&(str1[i - 1] !=' '))
   w++;
 else if(str1[i] !='.')
   c++;
}

cout<<"Number of words :::"<<w<<endl;
cout<<"Number of characters :::"<<c<<endl;
}

