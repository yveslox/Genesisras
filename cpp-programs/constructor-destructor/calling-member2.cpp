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
 
 
 Distance(float f)
 {
  feet = int(f);
  inches = 12 * (f- feet);
 }
 
 void getdist()
 {
  cout<<"Enter feet & inches : ";
  cin>>feet>>inches;
 }
 
 void showdist()
 {
  cout<<feet<<"\'-"<<inches<<"\""<<endl;
 }
 
 friend Distance square(Distance);
};

Distance square(Distance d)
{
 Distance dd;
 float ft = d.feet + d.inches/12.0;
 ft = ft * ft;
 dd.feet = int(ft);
 dd.inches = 12 * (ft - dd.feet);
 return dd;
}


int main()
{
 Distance d1(10, 6.5);
 Distance d2;
 
 cout<<"Dist-1 : ";
 d1.showdist();
 
 d2 = square(d1);
  
 cout<<"Dist-2 : ";
 d2.showdist();
 
}
