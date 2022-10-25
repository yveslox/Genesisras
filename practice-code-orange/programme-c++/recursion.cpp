#include<bits/stdc++.h>
using namespace std;

void recursionfunction(int n)
{
if(n==0)
{return ;}

cout<< n<<endl;
recursionfunction(n-1);
}



int main()
{
recursionfunction(5);
}

