#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
 int feet;
 float inches;
};

void display(Distance );
void display(float );


int main()
{
 Distance d1;
 float d2;
 
 cout<<" Enter feet :";
 cin>>d1.feet;
 cout<<" Enter inches :";
 cin>>d1.inches;

 cout<<"Enter entire Distance in inches :";
 cin>>d2;
 
 cout<<" d1 = ";
 display(d1);

 cout<<" d2 = ";
 display(d2);
 
}

void display(Distance d)
{
  cout<<d.feet<<"\'-"<<d.inches<<"\""<<endl;
}

void display(float dd)
{
 int feet = dd/ 12;
 float inches =  dd - (feet * 12);
 cout<<feet<<"\'-'"<<inches <<"\""<<endl; 
}



