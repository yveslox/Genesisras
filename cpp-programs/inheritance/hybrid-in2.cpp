#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

int a,b,c,d,e;

class A
{
 int x; 
 public :
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

class C: public A  
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

class D : public B,public C
{
 int w;
 public :
 void getw()
 {
  cout<<"Enter w :";
  cin>>w;
 }
 
 void showw()
 {
  cout<<"w : "<<w<<endl;
 }
 
 /**
 void result()
 {
  getab();
  getc();
  getd();
  
  e = a + b + c + d;
  cout<<"Addition is : "<<e<<endl;
 }
 
 void showz()
 {
  cout<<"z : "<<z<<endl;
 }
 
 void cube()
 {
  getnumber();
  cout<<"cube of the number ::: "<<(a*a*a)<<endl;
 }**/
};




int main()
{
 
 D d1;
 d1.B::getx();
 d1.C::getx(); 
 d1.gety();
 d1.getz();
 d1.getw();
 
 d1.B::showx();
 d1.C::showx();
 
 d1.showy();
 d1.showz();
 d1.showw();
 return 0;
}
