#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class A
{
 protected:
 int x;
 public:
 A(int a)
 {
  x = a;
  cout<<"para.Construct."<<endl;
 }
 
 ~A()
 {
  cout<<"A\'s Destructor."<<endl;
 }
 
 virtual void show()
 { 
  cout<<"x = "<<x<<endl;
 }
 
};


class B : public A
{
 private : 
 int y;
 public:
 B(int a,int b) : A(a)
 {
  y = b;
  cout<<"B\'s para. construct."<<endl;
 }
 
 ~B()
 {
  cout<<"B\'s Destructor."<<endl;
 }
 
 void show()
 {
  cout<<" y : "<<y<<endl;
 }
 
};


class C : public A
{
 private : 
 int z;
 public:
 C(int a,int c) : A(a)
 {
  z = c;
  cout<<"C\'s para. construct."<<endl;
 }
 
 ~C()
 {
  cout<<"C\'s Destructor."<<endl;
 }
 
 void show()
 {
  cout<<" z : "<<z<<endl;
 }
 
};


int main()
{
 A *p;
 
 p =new A(10);
 p->show();
 delete p;
 /**
 p =new B(10,20);
 p->show();
 delete P;
 
 p =new C(10,20);
 p->show();
 delete P;
 */
}
