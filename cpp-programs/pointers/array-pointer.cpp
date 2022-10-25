#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a = 10, b = 20,c = 30;
 int *p[3], *t ;
 int i;
 
 
 p[0] = &a;
 p[1] = &b;
 p[2] = &c;
   
 cout<<"Value before are :"<<endl;
 for(i=0;i<3;i++)
 {
  cout<<" "<<*p[i];
 }
 cout<<endl;
 
 t = p[0];
 p[0] = p[2];
 p[2] = t;
 
 cout<<"Value aftter are :"<<endl;
 for(i=0;i<3;i++)
 {
  cout<<" "<<*p[i];
 }
 cout<<endl;
 
}
