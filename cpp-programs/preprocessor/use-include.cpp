#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
#include "myheader.h"
using namespace std;

#define PI 3.14159
#define Volume(r) (4.0/3.0)*PI*(r)*(r)*(r);

int main()
{
 int a = 20, b = 10, res;

 res = add(a,b);
 cout<<"Sum = "<<res<<endl;

 res = sub(a,b);
 cout<<"Difference ="<<res<<endl;
}