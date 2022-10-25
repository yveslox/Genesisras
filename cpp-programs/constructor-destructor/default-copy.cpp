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
 Distance ()
 {
  feet = 0;
  inches = 0.0;
 }
 
 Distance(int ft,float in)
 {
  feet = ft;
  inches = in;
 }
 
 void showdist()
 {
  cout<<feet<<"\'-"<<inches<<"\""<<endl;
 }
};

int main()
{
 Distance d1(10,6.0);
 Distance d2(d1);
 Distance d3 = d1;
 
 cout<<"Dist-1 : ";
 d1.showdist();
 
 cout<<"Dist-2 : ";
 d2.showdist();

 cout<<"Dist-3 : ";
 d3.showdist();
 
}
