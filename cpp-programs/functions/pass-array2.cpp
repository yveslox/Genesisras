#include<string.h>
#include<bits/stdc++.h>
using namespace std;


void display(int [2][3]);

int main()
{

int ar[2][3]={{10,20,30},{40,50,60}};


display(ar);

cout<<endl;
}

void display(int a[2][3])
{
 int i,j;
 
 cout<<"matrix-A:"<<endl;
 
 for( i=0;i<2;i++)
 {
  for( j=0;j<3;j++)
   {
    cout<< setw(5) <<a[i][j];
   }
   cout<<endl;
 }
}
