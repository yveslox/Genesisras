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
 Distance d1;
 
 cout<<"Enter feet::";
 cin>>d1.feet;
 
 cout<<"Enter inches::";
 cin>>d1.inches;
 
 cout<<" feet : "<<d1.feet<<"\'-"<<endl<<" Inches : "<<d1.inches<<"\""<<endl;
}
