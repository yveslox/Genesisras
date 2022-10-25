#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b;
 cout<<"Enter value of a and b :";
 cin>>a>>b;
 
 int c = a - b;
 
 try
 {
  if(c!=0)
  {
   cout<<"Result : "<<(a/c)<<endl;
  }
  else
  {
   throw(c);
  }
 }
 
 catch(int i)
 {
  cerr<<"Exception caught : "<<i<<endl;
 }
 cout<<"End"<<endl;
}
