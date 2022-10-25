#include<string.h>
#include<bits/stdc++.h>
using namespace std;

float simp_int(float,float,float);

int main()
{
 float p,r,t,si;
 
 
 cout<<"Enter principal,rate and time:"<<endl;
 cin>>p>>r>>t;
 
 si=simp_int(p,r,t);
 
 cout<<"Simple interest = "<<si<<endl;

}

float simp_int(float p,float r,float t)
{
 float si;
 
 si = (p * r * t)/100;
 
 return si;
 }
