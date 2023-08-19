#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm> 
//#include<iostream.h>

using namespace std;


struct cmp
{
    bool operator()(int a,int b)
    {
        return a>b;
    }
};

int main()
{
    int num[5]={3,8,1,2,9};
    for(int i =0;i<5;i++)
    cout<<num[i]<<" ";

    cout<<endl;

    sort(num,num+5,cmp());
    for(int i =0;i<5;i++)
    cout<<num[i]<<" ";

    cout<<endl;

}