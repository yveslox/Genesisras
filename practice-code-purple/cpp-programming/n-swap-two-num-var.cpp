#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,temp;

    
    cout<<"Enter the first number : ";
    cin>>a;

    cout<<"Enter the second number : ";
    cin>>b;

    cout<<"Values Before swapping : "<<endl;
    cout<<"Frist number = "<<a<<endl;
    cout<<"Second number = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"Values After swapping : "<<endl;
    cout<<"Frist number = "<<a<<endl;
    cout<<"Second number = "<<b<<endl;

    cout<<endl;
    return 0;
}
