#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char ch[100];
int i,j,n,c = 0,s=0 ,d = 0,ss = 0;

cout<<"Enter string :::";
fgets(ch,99,stdin);


for(i=0 ; ch[i] !='\0' ; i++)
{
 if((ch[i] >=65)&&(ch[i] <=90))
   c++;
 else if((ch[i] >=97)&&(ch[i] <=122))
   s++;
 else if((ch[i] >=48)&&(ch[i] <=57))
   d++;
 else
  ss++;
}

cout<<"Total no. of capital letters :::"<<c<<endl;
cout<<"Total no. of small letters :::"<<s<<endl;
cout<<"Total no. of Digits :::"<<d<<endl;
cout<<"Total no. of special symbols :::"<<ss<<endl;

}

