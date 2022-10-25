#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
 int feet;
 float inches;
};

int main()
{
 Distance d[5];
 int i;
 
 
 for(i =0; i<5;i++)
 {
  cout<<"Enter feet & inches::";
  cin>>d[i].feet>>d[i].inches;
 }

 for(i =0; i<5;i++)
 {
 cout<<" feet : "<<d[i].feet<<"\'-"<<d[i].inches<<"\""<<endl;
 }
 
}
