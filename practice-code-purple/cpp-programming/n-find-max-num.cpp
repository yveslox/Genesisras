#include<math.h>
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int max(int num1,int num2,int num3)
{
    if(num1>=num2 && num1 >= num3)
    {
        return num1;
    }
    else if(num2>= num1 && num2>= num3)
    {
        return num2;
    }
    else 
    {
        return num3;
    } 
}

/* Main function */
int main()
{
    int a,b,c;

    cout<<"Enter number of rows in pyramid: ";
    cin>>a>>b>>c;
    
    cout<<"The maximum number is "<<max(a,b,c)<<endl;
     
    return 0;
}
