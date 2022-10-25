#include<string.h>
#include<bits/stdc++.h>
using namespace std;

template <class T1,class T2>
class A
{
 private:
 T1 x;
 T2 y;
 public:
 A()
 {}
 
 A(T1 a, T2 b)
 {
  x = a;
  y = b;	
 }
 
 void show()
 {
  cout<<" x = "<<x<<" y = "<<y<<endl;
 }
 
 T1 getx()
 {
  return x;
 }
 
 T2 gety()
 {
  return y;
 }
};


int main()
{

A<char, int> a1('B', 10);
a1.show();
cout<<" x : "<<a1.getx()<<endl;
cout<<" y : "<<a1.gety()<<endl;

A<int, float> a2(10, 12.34f);
a2.show();
cout<<" x : "<<a2.getx()<<endl;
cout<<" y : "<<a2.gety()<<endl;

A<float, char> a3(12.34f,'A');
a3.show();
cout<<" x : "<<a3.getx()<<endl;
cout<<" y : "<<a3.gety()<<endl;

A<double, int> a4(10.5, 20);
a4.show();
cout<<" x : "<<a4.getx()<<endl;
cout<<" y : "<<a4.gety()<<endl;

}
