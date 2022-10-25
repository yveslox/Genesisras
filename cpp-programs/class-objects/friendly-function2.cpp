#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class abc;

class xyz
{
 int x;
 public :
 void setvalue(int i)
 {
  x = i;
 }
 friend void max(xyz,abc);
};

class abc
{
 int a;
 public :
 void setvalue(int i)
 {
  a = i;
 }
 friend void max(xyz,abc);
};


void max(xyz m, abc n)
{
 if(m.x>=n.a)
   cout<<m.x;
 else
   cout<<n.a;
}


int main()
{
 cout<<"Max : ";
 xyz kmp;
 
 kmp.setvalue(10);
 abc dmp;
 dmp.setvalue(20);
 max(kmp,dmp);
 cout<<endl; 
}
