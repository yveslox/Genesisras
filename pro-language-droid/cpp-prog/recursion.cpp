#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

void recursionFunction(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    recursionFunction(n-1);
}

int main( )
{
  
  recursionFunction(5);
  cout<<endl;
}