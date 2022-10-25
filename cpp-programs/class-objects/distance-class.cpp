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
  cout<<"Enter feet :::";
  cin>>feet;
  cout<<"Enter inches :::";
  cin>>inches;
 }
 
 void showdist()
 {
  cout<<feet<<"\'-"<<inches<<"\""<<endl;
 }
};

int main()
{
 Distance d1, d2;
 
 d1.getdist();
 d2.getdist();
 d1.showdist();
 d2.showdist(); 
 
}
