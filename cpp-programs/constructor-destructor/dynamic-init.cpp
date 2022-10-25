#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{
 private:
  int x;
 public:
  
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

 int a;
 cout<<"Enter a number : ";
 cin>>a;
 
 A a1(a);
 a1.showx();
 

}
