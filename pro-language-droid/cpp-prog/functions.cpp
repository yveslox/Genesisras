#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int sumValue(int a,int b)
{
 int sum = a + b;
 return sum;
}

void printName(char name[])
{
 cout<<"Name : "<<name;
}

int main()
{
 int sum = sumValue(20,10);
 cout<<"Sum : "<<sum<<endl;

 char name[50]="john";
 cout<<"Name : "<<name<<endl;
}