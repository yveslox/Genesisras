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


class B 
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

class C : public A, public B 
{
 
 int z;
 public :
 void getz()
 {
  cout<<"Enter z :"<<endl;
  cin>>z;
 }
 
 void showz()
 {
  cout<<"z : "<<z<<endl;
 }
 
};


int main()
{
 C b1;
 b1.getx();
 b1.gety();
 b1.getz();

 b1.showx();
 b1.showy();
 b1.showz();  
 return 0;
}
