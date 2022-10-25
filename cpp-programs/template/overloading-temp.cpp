#include<string.h>
#include<bits/stdc++.h>
using namespace std;

template <class T>

void show( T a)
{
 cout<<" Template Function::: a = "<<a<<endl;
}

void show( int a)
{
 cout<<" Simple Function::: a = "<<a<<endl;
}

int main()
{
show(23);
show('N');
show(12.34);
show("Nils");
}
