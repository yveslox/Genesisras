#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;


#define Volume(r) (4.0/3.0)*PI*(r)*(r)*(r);

#define INDIA 1
#if(defined INDIA)
   #define PI 3.14159
#endif

#if(defined USA)
   #define PI 3.14
#endif

int main()
{
 float r,a;
 cout<<"Enter radius : ";
 cin>>r;

 a = PI * r * r;

 cout<<"Area of circle : "<<a<<endl;
}