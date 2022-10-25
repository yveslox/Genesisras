#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int simp_int();

int main()
{
 float si;
 
 si = simp_int();
 
 cout<<"simple interest = "<<si<<endl;
 
}

int simp_int()
{
 float p,r,t,si;
 cout<<"Enter principal, rate and time :";
 cin>>p>>r>>t;
 
 si = (p * r * t)/100;
 
 return si;
}
