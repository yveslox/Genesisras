#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char string[26];
int i,j,flag=1,len;

cout<<"Enter the string (max 25 characters) : ";
cin.getline(string,21);

for(len=0;string[len]!='\0';len++);


for(i=0,j=len-1;i<len/2;i++,j--)
{
 if(string[i] != string[j])
 {
  flag = 0;
  break;
 }
}
if(flag)
 cout<<"It is palindrome."<<endl;
else
 cout<<"It is not a palindrome."<<endl;

}
