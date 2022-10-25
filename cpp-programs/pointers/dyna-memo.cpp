#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int *p;
 
 p = new int;
 *p = 10;
 cout<<"Value : "<<*p;
 delete p;
 
 cout<<endl;
}
