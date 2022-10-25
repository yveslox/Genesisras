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

void add_dist(Distance dd1, Distance dd2)
{
 Distance dd3;
 dd3.feet = dd1.feet + dd2.feet;
 dd3.inches = dd1.inches + dd2.inches ;
 
  if(dd3.inches >= 12.0)
 {
  dd3.inches -= 12.0;
  dd3.feet++;
 }
 display(dd3);
}

int main()
{
 Distance d1,d2;
 
 
 cout<<"Enter feet and Enter inches::";
 cin>>d1.feet>>d1.inches;
 
 cout<<"Enter feet and Enter inches::";
 cin>>d2.feet>>d2.inches;
 
 display(d1);
 display(d2);
 
 add_dist(d1, d2);
 
}
