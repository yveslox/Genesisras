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
 Distance d[Max];
 int i;
 for(i = 0;i<Max;i++)
 {
  d[i].getdist();
 }
 
 for(i = 0;i<Max;i++)
 {
  d[i].showdist();
 }
}
