#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class A
{
 private : 
 int x; 
public:
A()
{}

A(int a)
{
 x = a;
}

/**A (A &a)
{
 x = a.x ;
 cout<<"Copy constructor called."<<endl;
}
**/
void show()
{
 cout<<" x : "<<x<<endl;
}

A operator = (A &a)
{
 x = a.x;
 cout<<"Assignement operator called."<<endl;
 return *this;
}

};


int main()
{ 
A a1(10);
A a2;

a1.show();

a2 = a1;
a2.show();

A a3 = a1;
a3.show();

A a4(a1);
a4.show();

}
