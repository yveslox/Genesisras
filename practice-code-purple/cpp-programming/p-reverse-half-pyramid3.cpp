#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int i,j,rows,cols;
    char c,first,last;

    cout<<"Enter number of rows in pyramid: ";
    cin>>rows;

    cout<<"The required pyramid pattern containing "<<rows<<" rows is :"<<endl;

    for(i = 1;i <= rows;i++)
    {
     first ='A';
     last = first + rows - i;
     c ='A';
     cols = rows-i+1;

     cout<<"Row #"<<i<<" contains "<<(rows - i +1)<<" stars : ";
     for(j=1;j <= cols;j++)
     {
        cout<<c<<" ";
        c+=1;
     }
     cout<<"\n";
    }
    return 0;
}

