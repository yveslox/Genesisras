#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14

int main()
{
 int a = 10;
 int *p1,*p2,*p3;
 
 p1 = &a;
 p2 = &a;
 p3 = &a;
 
 cout<<" *p1 = "<<*p1<<endl;
 cout<<" *p2 = "<<*p2<<endl;
 cout<<" *p3 = "<<*p3<<endl;
 
 *p2 = 50;
 
 cout<<" *p1 = "<<*p1<<endl;
 cout<<" *p2 = "<<*p2<<endl;
 cout<<" *p3 = "<<*p3<<endl;

 *p3 = *p1 + *p2;
 
 cout<<" *p1 = "<<*p1<<endl;
 cout<<" *p2 = "<<*p2<<endl;
 cout<<" *p3 = "<<*p3<<endl;

}
