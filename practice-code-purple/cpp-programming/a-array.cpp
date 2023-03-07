#include<iostream>
#include<math.h>

using namespace std;


int main()
{
    int a[10][10],n,l,i,j,count = 0;

    cout<<"Enter the matrix size (l*l) : ";
    cin>>l;
    
    cout<<"Enter the row number of matrix size : ";
    cin>>n;
    
    
    if(n<0||n<=1)
    {
        
    }
    else 
    {
        cout<<"Row is exceed the limit enter value>0 and less than of the matrix"<<endl;
        exit(0);
    }

    cout<<"Entered  the matrix value ";

        for(i = 1;i<=l;i++)
        for(j = 1;j<=l;j++)
        cin>>a[i][j];

    cout<<"Matrix row is given below"<<endl;

    for(i = 1;i<=j;i++)
    {
        cout<<a[n][i]<<"";
        if(a[n][i]%2 == 0)
        count++;
    }
    cout<<"No of even number in row is = "<<count;    
    cout<<endl;
}