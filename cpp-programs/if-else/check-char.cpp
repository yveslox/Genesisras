#include<bits/stdc++.h>
using namespace std;

int main()
{
char ch;

cout<<"Enter the character :::";
cin>>ch;

switch(ch)
{
 case 'a':
 case 'A':
 case 'e':
 case 'E':
 case 'i':
 case 'I':
 case 'o':
 case 'O':
 case 'u':
 case 'U':
 cout<<"It is a Vowel."<<endl;
 break;
 default:
 cout<<"It is not Vowel."<<endl;
}
}
