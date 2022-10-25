#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159
#define Volume(r) (4.0/3.0)*PI*(r)*(r)*(r);

int main()
{
 float r,v;
 cout<<"Enter radius of sphere : ";
 cin>>r;

 v = Volume(r);

 cout<<"volume of sphere : "<<v<<endl;
}