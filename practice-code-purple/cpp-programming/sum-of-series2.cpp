#include<bits/stdc++.h>
#include<iostream>
using namespace std;

double sum(int x,int n)
{
 double i,total =1.0,multi =x;
 cout<<total<<" ";
 
 for(i=1;i<n;i++)
 {
    total = total + multi;
    cout<< multi <<" ";
    multi = multi * x; 
 }
 cout<<"\n";

 return total;
}

int main()
{
    int x = 2;
    int n = 5;

    cout<<fixed
        <<setprecision(2)
        <<sum(x,n); 
    cout<<endl;
    return 0;
}

