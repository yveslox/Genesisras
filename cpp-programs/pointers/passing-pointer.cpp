#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void square(int * );

int main()
{
 int a = 10;
 square(&a);
 
 cout<<" a = "<<a<<endl;
 
}

void square(int * px)
{
 *px = (*px) * (*px);
 cout<<" *px = "<<*px<<endl;
}
