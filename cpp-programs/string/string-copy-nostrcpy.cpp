#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char str1[]="C++ programming examples";
int j;
char str2[Max];

for(j =0;str1[j] != '\0' ;j++)
     str2[j] = str1[j];
str2[j] = '\0';
cout<<"str1 : "<<str1<<endl;
cout<<"str2 : "<<str2<<endl;
}
