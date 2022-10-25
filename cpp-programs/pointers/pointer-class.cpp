#include<string.h>
#include<bits/stdc++.h>
using namespace std;

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
 Distance d;
 Distance *p;
 
 p = &d;
 p-> getdist();
 p-> showdist();
 
 
}
