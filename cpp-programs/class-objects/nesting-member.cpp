#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int Max = 5;

class A
{
 private:
 int x;
 int y;
 public :
  void get()
  {
   cout<<"Enter x & y : ";
   cin>>x>>y;
  }
 
  void showx()
 {
  cout<<" x = "<<x<<endl;
 }
 
 void showy()
 {
  cout<<" y = "<<y<<endl;
 }
};


int main()
{
 A a1;
 
 a1.get();
 a1.showx	();
 a1.showy();
 
}
