#include<string.h>
#include<bits/stdc++.h>
using namespace std;

struct Distance
{
 int feet;
 float inches;
};

int main()
{
 Distance d;
 Distance *p;
 
 p = &d;
 p-> feet = 10;
 p-> inches = 6.5;
 cout<<p->feet<<"\'-"<<p->inches<<"\""<<endl;
}
