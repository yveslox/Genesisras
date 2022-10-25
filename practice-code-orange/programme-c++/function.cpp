#include<bits/stdc++.h>
using namespace std;

int sumValue(int a,int b)
{
int sum=a + b;
return sum;
}

void printName(char name[])
{
  cout<<"Name :"<<name<<"\n";
}

int main()
{
int sum = sumValue(12,7);
cout<<"Sum :"<<sum<<"\n";

char name[50]="Abc Bcd";
printName(name);
}

