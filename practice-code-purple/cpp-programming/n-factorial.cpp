#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    int factorial =1;
    cout<<"Enter the number to find the factorial for : ";
    cin>>n;

    cout<<endl;

    for(i = 1;i<=n;i++)
    {
        factorial *=i;
    }
    
    cout<<"The factorial of  "<<n<<" is "<<factorial;
    
    cout<<endl;
    return 0;
}
