#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

const int Max = 5;

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
  cout<<feet<<"\'-"<<inches<<"\""<<endl;
 }
 
};

int main()
{
 Distance d1 , d2;
 
  d1.getdist();
  d2.getdist();
 
 cout<<"Dist-1 : ";
 d1.showdist();

 cout<<"Dist-2 : ";
 d2.showdist();
 
}
