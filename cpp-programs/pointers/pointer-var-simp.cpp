#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 float r,h,v;
 
 float *pr,*ph,*pv;
 const float PI = 3.14;
 
 
 pr = &r;
 ph= &h;
 pv= &v;
  
 cout<<"Enter radius & height :"<<endl;
 cin>>*pr>>*ph;
 
 
 *pv = PI * (*pr) * (*pr) * (*ph);
 cout<<" Volume cylindre = "<<*pv<<endl;

}
