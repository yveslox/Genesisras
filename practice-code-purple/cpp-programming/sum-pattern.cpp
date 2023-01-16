#include<iostream>
using namespace std;

int findsum(int num)
{
    double sum = 0;
    for(int i = 1;i<=num;i++)
    {
        //cout<<"1/"<<i<<"^"<<i<<" + "<<sum;
        sum = sum+(1/(i*i));
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the value of n, till which sum is required:";
    cin>>n;

    cout<<findsum(n)<<endl;
    return 0;
}