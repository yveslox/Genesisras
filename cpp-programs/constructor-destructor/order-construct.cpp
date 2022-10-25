#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class A
{
  int x;
  static int y;
  public :
  
  A()
  {
   y++;
   x = y;
   cout<<"Constructor :"<<x<<endl;
  }
  
 ~A()
 {
  cout<<"Destructor :"<<x<<endl;
 }
 
};

int A :: y = 0;

int main()
{
  A a1,a2;
  {
   A a3;
  }
  
  A a4, a5;
  {
   A a6, a7;
  }
  A a8;
   
}
