#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void display( char *);


int main()
{
 char a[] ="www.bethedevelopper.comm";
 
 display(a);
}

void display(char *p)
{
 int i;
 cout<<"String elements are : ";
 for(i = 0; *(p+i) !='\0';i++)
 {
  cout<<*(p+i);
 }
 cout<<endl;
}
