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
 
 void addDist(Distance, Distance );
};

void Distance :: addDist(Distance dd1 , Distance dd2)
{
 feet = dd1.feet + dd2.feet;
 inches = dd1.inches + dd2.inches ;
 
 if(inches >= 12.0)
 {
  inches -= 12.0;
  feet++;
 }
}

int main()
{
 Distance d1, d2, d3;
 
 d1.getdist();
 d2.getdist();
 
 d3.addDist(d1, d2);
 
 d1.showdist();
 cout<<" + ";
 d2.showdist(); 
 cout<<" = ";
 d3.showdist();
 cout<<endl;
 
}
