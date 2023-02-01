#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int i,j,k,rows;

    cout<<"Enter number of rows: ";
    cin>>rows;

    cout<<"Diamond star pattern"<<endl;

    for(i = 1;j <= rows;i++)
    {
     for(j=0;j <= rows - i;j++)
     {
        cout<<" ";
     }
     for(k=1;k <= i*2 - 1;k++)
     {
        cout<<"*";
     }
     cout<<"\n";
    }

    for(i = rows - 1;i > 0;i--)
    {
     for(j=1;j <= rows - i;j++)
     {
        cout<<" ";
     }
     for(k=1;k <= i*2 - 1;k++)
     {
        cout<<"*";
     }
     cout<<"\n";
    }

    return 0;
}

