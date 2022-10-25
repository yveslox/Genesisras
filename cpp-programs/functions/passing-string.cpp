#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int length(char ch[])
{
 int i , l=0;
 
 for(i=0 ;ch[i]!='\0' ;i++);
  l = i;
 return l;
}


int main()
{

int len = 0;
char str[20];

cout<<"Enter a string :";
fgets(str,18,stdin);

len = length(str);

cout<<"Length of string is = "<<len<<endl;

}


