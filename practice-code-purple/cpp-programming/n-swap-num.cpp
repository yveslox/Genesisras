#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the second number :";
    cin>>b;

    cout<<"Values before swapping :"<<endl;
    cout<<"Fisrt number ="<<a<<endl;
    cout<<"Second number ="<<b<<endl;
    
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"Values After swapping :"<<endl;
    cout<<"Fisrt number ="<<a<<endl;
    cout<<"Second number ="<<b<<endl;
        
    return 0;
}