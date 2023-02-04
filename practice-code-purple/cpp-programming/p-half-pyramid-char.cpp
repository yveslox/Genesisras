#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int i,j,rows;
    char c;
    cout<<"Enter number of rows in pyramid: ";
    cin>>rows;

    cout<<"The required pyramid pattern containing "<<rows<<" rows is :"<<endl;

    for(i = 1;i <= rows;i++)
    {
     cout<<"Row #"<<i<<" ";
     c ='A';

     for(j=1;j <= i;j++)
     {
        cout<<c<<" ";
        c+=1;
     }
     cout<<"\n";
    }

    return 0;
}

