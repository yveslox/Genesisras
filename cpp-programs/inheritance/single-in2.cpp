#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{
 
 int x;
 public :
 void getx()
 {
  cout<<"Enter x :"<<endl;
  cin>>x;
 }
 
 void showx()
 {
  cout<<"x : "<<x<<endl;
 }
};


class B : public A
{
 
 int y;
 public :
 void gety()
 {
  cout<<"Enter y :"<<endl;
  cin>>y;
 }
 
 void showy()
 {
  cout<<"y : "<<y<<endl;
 }
 
};

int main()
{
 B b1;
 b1.getx();
 b1.gety();

 b1.showx();
 b1.showy();  
 return 0;
}
