#include<bits/stdc++.h>

using namespace std;

void check_number(int num)
{
    if(num%2 == 0)
    {
        cout<<num<<" is a even nnumber"<<endl;
    }
    else 
    {
        cout<<num<<" is an odd number"<<endl;
    }
}

int main()
{
    int num;

    cout<<"Enter the first number :";
    cin>>num;

    check_number(num);
        
    return 0;
}