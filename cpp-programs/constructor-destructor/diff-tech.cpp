#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

class Distance
{
 private:
 int feet;
 float inches;
 public:
 Distance() : feet(0),inches(0.0)
 {}
 
 Distance(int ft,float in):
 feet(ft),
 inches(in)
 { }
 
 void getdist()
 {
  cout<<"Enter feet & inches :";
  cin>>feet>>inches;
 }
 
 void showdist()
 {
  cout<<feet<<"\'-"<<inches<<"\""<<endl;
 }
};

int main()
{
 Distance d1,d2;
 d2.getdist();
 
 Distance d3(10, 6.0);
 
 cout<<"Dist-1 : ";
 d1.showdist();
 
 cout<<"Dist-2 : ";
 d2.showdist();

 cout<<"Dist-3 : ";
 d3.showdist();
 
}
