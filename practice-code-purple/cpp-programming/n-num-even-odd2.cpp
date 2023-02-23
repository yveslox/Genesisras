#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of integers you want to check :";
    cin>>n;

    cout<<endl;

    if(n%2 == 0)
    {
        cout<<"The entered number "<<n<<" is even";
    }

    else 
    {
        cout<<"The entered number "<<n<<" is odd";
    }
    
    cout<<endl;
    return 0;
}
