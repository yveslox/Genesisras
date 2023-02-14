#include<bits/stdc++.h>

using namespace std;

int greatest(int a,int b,int c)
{
    
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else 
    {
        return c;
    }
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter the three number :";
    cin>>num1>>num2>>num3;

    cout<<greatest(num1,num2,num3)<<endl;

    return 0;
}