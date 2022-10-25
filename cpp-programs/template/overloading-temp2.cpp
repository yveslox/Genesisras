#include<string.h>
#include<bits/stdc++.h>
using namespace std;

template <class T>

void show(T a)
{
 cout<<" Template Function-1::: a = "<<a<<endl;
}

template <class T>
void show( T a, int b)
{
 cout<<" Template Function-2::: a = "<<a<<" b = "<<b<<endl;
}

int main()
{
show(10);
show('N');
show(12.34);
show("Nils");

show(10, 3);
show('N', 4);
show(12.34, 5);
show("Nils", 6);

}
