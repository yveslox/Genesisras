#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int Max = 5;

class outer
{
 int a;
 
 public :
  int b;
   class inner
 {
   int c;
  public: 
   int d;
   inner()
   {
     c = 30 ;
     d = 40 ;
   }
   
  void showinner()
   {
     cout<<"Inner :: showinner().";
     cout<<" "<<c<<" "<<d<<endl;
   }
 
 };
 
inner ob1;
 
 inner ob2;
 
  outer()
   {
     a = 10 ;
     b = 20 ;
   }
   
  void showouter()
   {
     cout<<"outer :: showouter().";
     cout<<" "<<a<<" "<<b<<" "<<ob2.d<<endl;
   }
};



int main()
{
 outer ob;
 
 cout<<"Main()."<<ob.b<<endl;
 ob.showouter();
 ob.ob2.showinner(); 
}
