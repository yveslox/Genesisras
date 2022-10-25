#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void simp_int(float,float,float);

int main()
{
 float p,r,t;
 
 
 cout<<"Enter principal,rate and time:"<<endl;
 cin>>p>>r>>t;
 
 simp_int(p,r,t);
 
}

void simp_int(float p,float r,float t)
{
 float si;
 
 si = (p * r * t)/100;
 
 cout<<"Simple interest = "<<si<<endl;
}
