#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;

/* Main function */
int main()
{
    int i,j,rows;
    

    cout<<"Enter number of rows in pyramid: ";
    cin>>rows;

    cout<<"The required pyramid pattern containing "<<rows<<" rows is :"<<endl;

    for(i = 1;i <= rows;i++)
    {
     cout<<"Row #"<<i<<" contains "<<(rows - i +1)<<" stars : ";

     for(j=rows;j >= i;j--)
     {
        cout<<"* ";
     }
     cout<<"\n";
    }
    return 0;
}

