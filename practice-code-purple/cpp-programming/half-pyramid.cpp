#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Enter the number of row\n";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
         if(j%2==0)
         cout<<"A";
         else 
         cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}