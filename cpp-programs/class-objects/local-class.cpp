#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14


void fun()
{
 class test
 {
  public:
  void method()
  {
   cout<<"Local class method() called"<<endl;
  }
 };
 
 test t;
 t.method();
}

int main()
{
 fun();
 return 0;
}
