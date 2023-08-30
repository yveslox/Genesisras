#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main( )
{
    stack <int> mystack;
    mystack.push(6);
    mystack.push(5);
    mystack.push(4);
    mystack.push(3);
    mystack.push(2);
    mystack.push(1);

    while(mystack.empty() == false)
    {
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
    cout<<endl;
}