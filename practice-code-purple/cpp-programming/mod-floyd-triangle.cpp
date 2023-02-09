#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int i,j,rows;
    
    int n=0,first,last;

    cout<<"Enter number of rows in pyramid: ";
    cin>>rows;

    cout<<"The required pyramid pattern containing "<<rows<<" rows is :"<<endl;

    for(i = 1;i <= rows;i++)
    {
     first = i;
     last = first + i - 1;
    
    //cout<<"Row #"<<i<<" contains "<<(rows - i +1)<<" stars : ";
     
     for(j=1;j <= i;j++)
     {
        cout<<n+j<<" ";
     }
     n++;
     cout<<"\n";
    }
    return 0;
}
