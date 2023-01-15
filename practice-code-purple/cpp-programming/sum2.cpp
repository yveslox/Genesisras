#include<iostream>

using namespace std;

int findsum(int num)
{
    int sum = 0;
    sum = num *(num+1)/2;
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the value of n, till which sum is required :";
    cin>>n;
    cout<<findsum(n)<<endl;
    return 0;
}