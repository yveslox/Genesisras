#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{

 
 public :
 int a,b;
 /**void getx()
 {
  cout<<"Enter x :"<<endl;
  cin>>x;
 }
 
 void showx()
 {
  cout<<"x : "<<x<<endl;
 }**/
 void getnumber()
 {
  cout<<"Enter number :::";
  cin>>a;
 }
};


class B : public A
{
 
 int y;
 public :
 
 /**void gety()
 {
  cout<<"Enter y :"<<endl;
  cin>>y;
 }
 
 void showy()
 {
  cout<<"y : "<<y<<endl;
 }**/
 void square()
 {
  getnumber();
  cout<<"square of number ::: "<<(a*a)<<endl;
  cout<<"---------------------"<<endl;
 }
 
};

class C : public A 
{
 
 int z;
 public :
 /**
 void getz()
 {
  cout<<"Enter z :"<<endl;
  cin>>z;
 }
 
 void showz()
 {
  cout<<"z : "<<z<<endl;
 }**/
 void cube()
 {
  getnumber();
  cout<<"cube of the number ::: "<<(a*a*a)<<endl;
 }
};


int main()
{
 B b1;
 b1.square();
 
 C c1;
 c1.cube();
 
 return 0;
}
