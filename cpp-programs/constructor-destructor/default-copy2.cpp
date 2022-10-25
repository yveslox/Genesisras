#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{
 private:
  int x;
 public:
  A()
  {
   
  }
  
  A(int a)
  {
   x = a;
  }
   
 void showx()
 {
  cout<<" x :"<<x<<endl;
 }
};

int main()
{
 A a1(10);
 A a2;
 a1.showx();
 
 a2=a1;
 a2.showx();
 
 A a3 = a1;
 a3.showx();

 A a4(a1);
 a4.showx();

}
