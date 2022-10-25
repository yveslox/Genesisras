#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

int c,d,e;

class A
{
 private:
 int x;
 public :
 /**
 A()
 {
  x = 0;
  cout<<"A \'s def. constructor."<<endl;
 }
 
 A(int a)
 {
  x = a;
  cout<<"A \'s para. constructor."<<endl;
 }
 **/
 void get()
 {
  cout<<"Enter x :";
  cin>>x;
 }
 
 void show()
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
 private:
 int y;
 public :
 /**
 B() : A()
 {
  y = 0;
  cout<<"B \'s def. constructor."<<endl;
 }
 
 B(int a,int b):A(a)
 {
  y = b;
  cout<<"B \'s para. constructor."<<endl;
 }

 **/
 void get()
 {
  cout<<"Enter y :";
  cin>>y;
 }
 
 void show()
 {
  //A::show();
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
 private:
 int z;
 public :
 void get()
 {
  cout<<"Enter z :";
  cin>>z;
 }
 
 void show()
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
 
 A a1;
 B b1;
 C c1;
 
 a1.get();
 b1.get();
 c1.get();
 
 a1.show();
 b1.show();
 c1.show();
 return 0;
}
