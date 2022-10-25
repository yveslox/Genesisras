#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const float PI = 3.1415926;

inline float area(const float r)
{
 
 return (PI * r * r);
}


int main()
{

float radius;

cout<<"Enter the radius of a circle::: ";
cin>>radius;


cout<<"the area of circle is = "<<area(radius)<<endl;

}


