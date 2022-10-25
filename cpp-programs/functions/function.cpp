#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void simp_int();

int main()
{
 
 simp_int();
 
}

void simp_int()
{
 float p,r,t,si;
 cout<<"Enter principal, rate and time :";
 cin>>p>>r>>t;
 
 si = (p * r * t)/100;
 
 cout<<"simple interest = "<<si<<endl;
}
