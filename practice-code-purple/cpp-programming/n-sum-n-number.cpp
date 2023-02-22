#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,temp;
    int sum = 0;

    cout<<"Enter the number of integers you want to add :";
    cin>>n;

    cout<<endl;

    for(i = 0;i<n;i++)
    {
        cout<<"Enter number"<<i+1<<" : ";
        cin>>temp;
        sum +=temp;
    }

    cout<<"Sum of the "<<n<<" numbers entered by user is : "<<sum;
    cout<<endl;
    return 0;
}
