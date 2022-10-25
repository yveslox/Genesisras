#include<bits/stdc++.h>
using namespace std;

int sumvalue(int a,int b)
{
 int sum = a + b;
 return sum;
}

void printname(char name[])
{
 cout<<"Name :"<<name<<endl;
}

int main()
{
int sum = sumvalue(12,7);
cout<<"Sum :"<<sum;
cout<<" "<<endl;

char name[50] = "Abc Bcd";
printname(name);
}
