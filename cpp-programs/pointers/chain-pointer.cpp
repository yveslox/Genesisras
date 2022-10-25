#include<string.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
 int a = 10;
 int *p, **pp, ***ppp, ****pppp;
 
 p = &a;
 
 cout<<" p = "<<p<<endl;
 cout<<" *p = "<<*p<<endl;
 
 pp = &p;
 
 cout<<" pp = "<<pp<<endl;
 cout<<" *pp = "<<*pp<<endl;
 cout<<" **pp = "<<**pp<<endl;
 
 ppp = &pp;
 
 cout<<" ppp = "<<ppp<<endl;
 cout<<" *ppp = "<<*ppp<<endl;
 cout<<" **ppp = "<<**ppp<<endl;
 cout<<" ***ppp = "<<***ppp<<endl;


 pppp = &ppp;
 
 cout<<" pppp = "<<pppp<<endl;
 cout<<" *pppp = "<<*pppp<<endl;
 cout<<" **pppp = "<<**pppp<<endl;
 cout<<" ***pppp = "<<***pppp<<endl;
 cout<<" ****pppp = "<<****pppp<<endl;
 
}
