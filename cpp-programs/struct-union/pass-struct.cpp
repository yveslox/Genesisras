#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
 int feet;
 float inches;
};

void display(Distance d)
{
  cout<<" Distance ="<<d.feet<<"\'-"<<d.inches<<"\""<<endl;
}


int main()
{
 Distance d1,d2;
 
 
 cout<<"Enter feet and Enter inches::";
 cin>>d1.feet>>d1.inches;
 
 d2 = d1;
 
 display(d1);
 display(d2);
 
}
