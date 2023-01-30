#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int rows;

    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=rows;i>=1;i--)
    {
     for(int j=1;j<=i;j++)
     {
        cout<<"* ";
     }
     cout<<"\n";
    }

    return 0;
}

