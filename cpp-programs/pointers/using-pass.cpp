#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void display(int *);

int main()
{
 int a[] ={10,20,30,40,50};
 
 display(a);
 
}

void display(int *p)
{
 int i;
 cout<<"Array elements are : ";
 for(i= 0;i<5;i++)
 {
  cout<<" "<<*(p+i);
 }
 cout<<endl;
}
