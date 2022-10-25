#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class B;

class A
{
  private :
  int x;
  public :
  
  A()
  {
   x = 10;
  }
   friend int add(A,B);
};

class B
{
  private :
  int y;
  public :
  
  B()
  {
   y = 20;
  }
   friend int add(A,B);
};

int add(A a, B b)
{
 return (a.x + b.y);
}


int main()
{
  A a1;
  B b1;
  
  cout<<" Sum : "<<add(a1,b1)<<endl;   
}
