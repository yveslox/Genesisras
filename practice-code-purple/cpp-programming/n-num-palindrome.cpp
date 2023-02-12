#include<bits/stdc++.h>

using namespace std;

void check_palindrome(int a)
{
    int temp=a;
    int res=0;
    for(int i=a;i>0;i=i/10)
    {
        res += res*10+i%10;
    }
    if(temp==res)
    {
        cout<<"Is an palindrome number"<<endl;
    }
    else 
    {
        cout<<a<<"Is not an palindrome number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter the number that you want to check:";
    cin>>num;
    check_palindrome(num);

    return 0;
}