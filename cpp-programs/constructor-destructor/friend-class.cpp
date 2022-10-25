#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


class A
{
  int x;
  public :
  
  A()
  {
   x = 10;
  }
   friend class B;
};

class B
{
  public :
  
  void show1(A a)
  {
   cout<<"x = "<<a.x<<endl;
  }
  
  void show2(A a)
  {
   cout<<"x = "<<a.x<<endl;
  }
  
  void show3(A a)
  {
   cout<<"x = "<<a.x<<endl;
  }
 
};



int main()
{
  A a1;
  B b1;
   
  b1.show1(a1);
  b1.show2(a1);
  b1.show3(a1);
}
