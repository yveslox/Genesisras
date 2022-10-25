#include<bits/stdc++.h>
using namespace std;

int main()
{
 int d,y,m,w;
 
 cout<<"Enter total number of days :";
 cin>>d;
 
 y = d/365;
 d = d%365;
 m = d/30;
 d = d%30;
 w = d/7;
 d = d %7;
 
 cout<<"Years = "<<y<<endl;
 cout<<"Months = "<<m<<endl;
 cout<<"weeks = "<<w<<endl;
 cout<<"Days = "<<d<<endl; 
}
