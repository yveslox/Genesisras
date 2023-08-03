#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 10;

    int* p =&num;

    cout<<"Value : "<<*p<<endl;
    cout<<"Memory address : "<<p<<endl;
}