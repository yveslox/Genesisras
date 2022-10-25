#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{
 private:
  int x;
 public:
  
  A(int a = 10)
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

 A a1;
 A a2(100);
 
 a1.showx();
 a2.showx();
 

}
