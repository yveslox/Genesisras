#include<stdio.h>
#include<bits/stdc++.h>
//#include<iostream.h>

using namespace std;

int main()
{
    int num[5]={3,8,1,2,9};
    sort(num,num+5);
    for(int i= 0;i<5;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    cout<<lower_bound(num,num+5,3)-num<<endl;
    cout<<lower_bound(num,num+5,4)-num<<endl;
}