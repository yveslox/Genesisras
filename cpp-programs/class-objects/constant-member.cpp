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
  cout<<"Enter x : ";
  cin>>x;
 }
 void showx()const
 {
  cout<<"x : "<<x<<endl;
 } 
 
};




int main()
{
 A a1;
 
 a1.getx();
 a1.showx();
 
}
