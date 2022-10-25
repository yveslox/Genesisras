#include<string.h>
#include<bits/stdc++.h>
using namespace std;


float simp_int(float,float,float);
float simp_int(float,float);
float simp_int(float);
float simp_int();


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

float simp_int(float p,float r)
{
 float si;
 si= (p * r * 3)/100;
 return si;
}

float simp_int(float p)
{
 float si;
 si= (p * 10 * 3)/100;
 return si;
}


float simp_int()
{
 float si;
 si= (1000 * 10 * 3)/100;
 return si;
}


