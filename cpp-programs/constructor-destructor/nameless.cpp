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

 
 A().showx();
 A(100).showx();
 

}
