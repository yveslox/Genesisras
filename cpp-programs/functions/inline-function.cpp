#include<string.h>
#include<bits/stdc++.h>
using namespace std;

inline float lbstokg(float pounds)
{
 
 return 0.453592 * pounds;
}


int main()
{

float lbs;

cout<<"Enter yours weigth in pounds ::: ";
cin>>lbs;


cout<<"your weight in kilogram is = "<<lbstokg(lbs)<<endl;

}


