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
 int i,n = 0;
 char ch;
 Distance *p[100];
 do
 {
  p[n] = new Distance;
  p[n]->getdist();
  n++;
  
  cout<<"Enter another Distance (y/n) : ";
  cin>>ch;
 }while (ch == 'y' || ch == 'Y');
 
 for(i = 0; i< n;i++)
 {
  p[i] -> showdist();
 }
  
}
