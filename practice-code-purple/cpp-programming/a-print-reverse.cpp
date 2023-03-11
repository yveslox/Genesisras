#include<iostream>
#include<math.h>

using namespace std;


int main()
{
    int a[100],i,n,sum = 0;

    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    cout<<"Enter the element of array : "<<endl;
    
    for(i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Element in array is given below : ";
    for(i =(n-1);i>=0;i--)
    {
        cout<<a[i]<<" ";
        sum =sum +a[i];
    }
    cout<<endl;
    cout<<"Sum of array is :"<<sum<<endl;
    return 0;
}
