#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char str1[25], str2[25],tmp[25];

cout<<"Enter two string :::";
cin>>str1>>str2;

cout<<"Strings before swapping are :";
cout<<"1. "<<str1<<" ,2. "<<str2<<endl;

strcpy(tmp,str1);
strcpy(str1,str2);
strcpy(str2,tmp);

cout<<"Strings After swapping are :";
cout<<"1. "<<str1<<" ,2. "<<str2<<endl;

}
