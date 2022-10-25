#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int Max = 5;


int main()
{

 class A
{
 private:
 int x;
 int y;
 public :
  void get()
  {
   cout<<"Enter x : ";
   cin>>x;
  }
 
  void showx()
 {
  cout<<" x = "<<x<<endl;
 }
};

A a1,a2;
 
 a1.get();
 a2.get();
 
 a1.showx();
 a2.showx();
 
}
