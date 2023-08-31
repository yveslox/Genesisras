#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main( )
{
    queue <int> myqueue;
    myqueue.push(5);
    myqueue.push(7);
    myqueue.push(4);
    myqueue.push(9);

    while(myqueue.empty() == false)
    {
        cout<<myqueue.front()<<" ";
        myqueue.pop();
    }
    cout<<endl;
}