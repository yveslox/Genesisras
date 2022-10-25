#include<string.h>
#include<bits/stdc++.h>
using namespace std;


float simp_int(float=1000,float=10,float=3);

int main()
{

float p,r,t,si;

si = simp_int(2000,15,2);
cout<<"Simple interest = "<<si<<endl;

si = simp_int(2000,15);
cout<<"Simple interest = "<<si<<endl;

si = simp_int(2000);
cout<<"Simple interest = "<<si<<endl;

si = simp_int();
cout<<"Simple interest = "<<si<<endl;

}

float simp_int(float p,float r,float t)
{
 
 float si;
 si= (p * r * t)/100;
 return si;
}
