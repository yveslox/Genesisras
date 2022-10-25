#include<bits/stdc++.h>
using namespace std;

int main()
{
queue <int> myqueue;

myqueue.push(5);
myqueue.push(6);
myqueue.push(7);
myqueue.push(8);

  while(myqueue.empty()==false)
  {
    cout<<myqueue.front()<<" ";
    myqueue.pop();
  }
  
  cout<<endl;
}
