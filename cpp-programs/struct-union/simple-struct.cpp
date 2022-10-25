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
 Distance d1,d2;
 
 d1.feet = 12;
 d1.inches = 9.5;
 
 cout<<"Enter feet::";
 cin>>d2.feet;
 
 cout<<"Enter inches::";
 cin>>d2.inches;
 
 cout<<d1.feet<<"\'-"<<d1.inches<<"\""<<endl;
 cout<<d2.feet<<"\'-"<<d2.inches<<"\""<<endl;
}
