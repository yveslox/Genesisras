#include<string.h>
//#include<fstream.h>
#include<bits/stdc++.h>
using namespace std;


#define Volume(r) (4.0/3.0)*PI*(r)*(r)*(r);

void fun1();
void fun2();

#pragma startup fun1
#pragma exit fun2

int main()
{   
 cout<<"Inside main()"<<endl;
}

void fun1()
{
    cout<<"Inside function1()-before main()."<<endl;
}

void fun2()
{
    cout<<"Inside function2()-after main()."<<endl;
}