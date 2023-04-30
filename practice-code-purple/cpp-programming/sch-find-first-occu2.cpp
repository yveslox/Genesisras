#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int first(int a[],int l,int h,int b)
{
    int res = -1;
    while(l<=h)
    {
        int m =(l + h)/2;

        if(a[m] == b)
        {
            res = m;
            h = m -1;
        }
        else if(a[m]>b)
        {
            h = m - 1;
        }
        else
        {
           l = m +1;
        }
    }
    return res;
}

int main ()
{
    
int i,n;
int a[] ={2,3,3,4,4,4,4,4,5};
n = sizeof(a)/sizeof(a[0]);

cout<<"The elements input sorted array are : \n";

for(i = 0;i<n;i++)
{
    cout<<a[i]<<" ";
}

int k = 4;
int f =first(a,0,n-1,k);

cout<<"The index of the first occurance of "<<k<<" is : "<<f<<endl;
    
return 0;
}