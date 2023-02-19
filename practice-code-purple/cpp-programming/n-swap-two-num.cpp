#include<bits/stdc++.h>

using namespace std;

void swap(int,int);

int main()
{
    int a,b;

    cout<<"Enter the two numbers to swap in c++ : ";
    cin>>a>>b;

    cout<<"After swapping of two numbers: ";
    swap(a,b);
    
    cout<<endl;
    return 0;
}


void swap(int x,int y)
{

    int z;

    z = x;
    x = y;
    y = z;

    cout<<" "<<x<<" "<<y;
}