#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;


/* Main function */
int main()
{
    int rows;

    cout<<"Enter the number of rows :";
    cin>>rows;

    for(int i=1;i<=rows;i++)
    {
     for(int j=1;j<=i;j++)
     {
      cout<<j<<" ";
     }
     cout<<"\n";
    }
    return 0;
}

