#include<string.h>
#include<bits/stdc++.h>
using namespace std;


void areacircum(float,float&,float&);

int main()
{
 float radius,area,circum;
 
 cout<<"Enter a radius:";
 cin>>radius;
 
 areacircum(radius, area,circum);
 
 cout<<"Area of circle = "<<area<<endl<<"Circumference of circle = "<<circum<<endl;
}

void areacircum(float r,float &ar, float &cir)
{
 ar = 3.14 * r * r;
 cir = 2 * 3.14 * r;
}
