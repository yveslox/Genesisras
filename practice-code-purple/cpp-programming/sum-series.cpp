#include<iostream>
using namespace std;

int main()
{
    int i,n,sum = 0;
    cout<<"1+2+3+...+n"<<endl;
    cout<<"Enter the value of n : ";
    cin>>n;
     
    for(i=1;i<=n;i++)
    sum +=i;

    cout<<"\nSum = "<<sum<<endl;
    return 0;
}