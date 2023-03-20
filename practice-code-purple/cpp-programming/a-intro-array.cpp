#include<iostream>
using namespace std;


int main()
{
   
    int i,n;

    cout<<"Enter the number of integers you want in an array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<"into an array :\n ";

    for(i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Element in array are :\n";

    for(i =0;i<n;i++)
    {
        cout<<"arr["<<i<<"] ="<<arr[i]<<endl;
    }

    cout<<endl;
    return 0;
}
