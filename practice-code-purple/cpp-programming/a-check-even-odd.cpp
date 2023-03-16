#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;


int main()
{
    int a[100],i,n,sum = 0;

    cout<<"\n===============================\n";
    cout<<"Enter the size of the array ";
    cout<<"\n===============================\n";
    
    cin>>n;
   
    cout<<"\n===============================\n";
    cout<<"Enter the elements of an array : ";
    cout<<"\n===============================\n";
    
    for(i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\n===============================\n";
    cout<<"Element in array is given below : ";
    cout<<"\n===============================\n";
    
    for(i = 0;i<n;i++)
    {
        if(i%2 == 0)
        cout<<"Evenness \n"<<a[i]<<" ";
        else 
        cout<<"Oddness \n"<<a[i]<<" ";
    }

    cout<<"\n================================\n";
    return 0;
}
