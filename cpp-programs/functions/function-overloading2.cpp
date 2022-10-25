#include<string.h>
#include<bits/stdc++.h>
using namespace std;


void repchar(char ,int);
void repchar(char);
void repchar();


int main()
{

repchar();
repchar('=');
repchar('+',30);

}

void repchar(char ch,int n)
{
 for(int j = 0;j<n;j++)
 {
  cout<<ch;
 }
 cout<<endl; 
}

void repchar(char ch)
{
 for(int j = 0;j<20;j++)
 {
  cout<<ch;
 }
 cout<<endl; 
}


void repchar()
{
 for(int j = 0;j<20;j++)
 {
  cout<<"*";
 }
 cout<<endl; 
}
