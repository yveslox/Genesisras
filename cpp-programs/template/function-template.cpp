#include<string.h>
#include<bits/stdc++.h>
using namespace std;

template <class T>

void swap( T a, T b)
{
 T t;
 t = a;
 a = b;
 b = t;
 cout<<" a = "<<a<<", b = "<<b<<endl;
}

int main()
{
swap(10,20);
swap(10.25,20.75);
swap('A','B');
}
