#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b,c,g;
 
 cout<<"Enter three numbers :::";
 cin>>a>>b>>c;
 
 if(a>b) 
 {
  if(a>c)
   g = a;
   else
   g = c;
 }
 else
 {
  if(b>c)
  g = b;
  else
  g = c;  
 }
 cout<<"Greatest number is : "<<g<<endl;
}
