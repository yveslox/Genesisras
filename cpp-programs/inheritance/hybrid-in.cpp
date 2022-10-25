#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

int a,b,c,d,e;

class A
{
 
 public :
 void getab()
 {
  cout<<"Enter A :";
  cin>>a;
  cout<<"Enter B :";
  cin>>b;
 }
 
 /**
 void showx()
 {
  cout<<"x : "<<x<<endl;
 }
 
 
 void getnumber()
 {
  cout<<"Enter number :::";
  cin>>a;
 }**/
};


class B :public A
{
 
 public :
 void getc()
 {
  cout<<"Enter C :";
  cin>>c;
 }
 
 /**
 void showy()
 {
  cout<<"y : "<<y<<endl;
 }
 
 void square()
 {
  getnumber();
  cout<<"square of number ::: "<<(a*a)<<endl;
  cout<<"---------------------"<<endl;
 }
 **/
};

class C  
{
 
 public :
 void getd()
 {
  cout<<"Enter D :";
  cin>>d;
 }
 /**
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

class D : public B,public C 
{
 
 public :
 void result()
 {
  getab();
  getc();
  getd();
  
  e = a + b + c + d;
  cout<<"Addition is : "<<e<<endl;
 }
 /**
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
 d1.result();
  
 return 0;
}
