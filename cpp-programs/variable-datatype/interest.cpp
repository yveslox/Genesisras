#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
 float ci,p,r,n,a;
 
 cout<<"Enter Principal, rate of interest & time:::";
 cin>>p>>r>>n;
 
 a = p *  pow((1 + (r/100)),n);
 ci = a - p;
 
 cout<<"Compound interest = Rs. "<<ci<<endl;
}
