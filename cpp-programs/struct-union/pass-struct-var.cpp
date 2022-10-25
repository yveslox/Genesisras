#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
 int feet;
 float inches;
};

void scale(Distance& ,float);
void display(Distance );

int main()
{
 Distance d1 ={12, 6.5},d2={10, 6.0};
 
 
 cout<<" Dist1 = ";
 display(d1);

 cout<<" Dist2 = ";
 display(d2);
 
 scale(d1, 0.5);
 scale(d2, 0.25);
 
 cout<<" Dist1 = ";
 display(d1);

 cout<<" Dist2 = ";
 display(d2);
 
}

void scale(Distance& dd,float factor)
{
 float inches = (dd.feet * 12 + dd.inches ) * factor;
 dd.feet = inches / 12;
 dd.inches = inches - dd.feet * 12 ; 
}

void display(Distance d)
{
  cout<<" Distance ="<<d.feet<<"\'-"<<d.inches<<"\""<<endl;
}


