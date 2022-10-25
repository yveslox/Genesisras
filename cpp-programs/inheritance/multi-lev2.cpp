#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{
 int x;
 public :
 int a,b;
 void getx()
 {
  cout<<"Enter x :";
  cin>>x;
 }
 
 void showx()
 {
  cout<<"x : "<<x<<endl;
 }
 
 /**
 void getnumber()
 {
  cout<<"Enter number :::";
  cin>>a;
 }**/
};


class B : public A
{
 
 int y;
 public :
 
  void gety()
 {
  cout<<"Enter y :";
  cin>>y;
 }
 
 void showy()
 {
  cout<<"y : "<<y<<endl;
 }
 /**
 void square()
 {
  getnumber();
  cout<<"square of number ::: "<<(a*a)<<endl;
  cout<<"---------------------"<<endl;
 }
 **/
};

class C : public B 
{
 
 int z;
 public :
 
 void getz()
 {
  cout<<"Enter z :";
  cin>>z;
 }
 
 void showz()
 {
  cout<<"z : "<<z<<endl;
 }
 /**
 void cube()
 {
  getnumber();
  cout<<"cube of the number ::: "<<(a*a*a)<<endl;
 }**/
};


int main()
{
 
 C c1;
 
 c1.getx();
 c1.gety();
 c1.getz();
  
 c1.showx();
 c1.showy();
 c1.showz();
 
 return 0;
}
