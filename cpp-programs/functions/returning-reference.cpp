#include<string.h>
#include<bits/stdc++.h>
using namespace std;


int &min(int &a ,int&b)
{
 if(a<b)
 return a;
 else 
 return b;
}

int main()
{
 int x = 10,y = 20;
 
 cout<<"x = "<<x<<", y = "<<y<<endl;
 
 min(x,y) = 100;
 
 cout<<"x = "<<x<<", y = "<<y<<endl;
}


