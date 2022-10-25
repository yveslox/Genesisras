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
 void getdist()
 {
  cout<<"Enter feet inches :::";
  cin>>feet>>inches;
 }
 
 void showdist()
 {
  cout<<feet<<"\'-"<<inches<<"\"";
 }
 
 Distance addDist(Distance );
};

Distance Distance :: addDist(Distance dd2)
{
 Distance dd3;
 dd3.feet = feet + dd2.feet;
 dd3.inches = inches + dd2.inches ;
 
 if(dd3.inches >= 12.0)
 {
  dd3.inches -= 12.0;
  dd3.feet++;
 }
 return dd3;
}

int main()
{
 Distance d1, d2, d3;
 
 d1.getdist();
 d2.getdist();
 
 d3= d1.addDist(d2);
 
 d1.showdist();
 cout<<" + ";
 d2.showdist(); 
 cout<<" = ";
 d3.showdist();
 
 cout<<endl;
 
}
