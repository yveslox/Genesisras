#include<string.h>
#include<bits/stdc++.h>
using namespace std;


void repchar(char ='*' ,int =20);

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
