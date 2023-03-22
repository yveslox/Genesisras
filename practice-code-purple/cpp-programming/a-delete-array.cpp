#include<iostream>
using namespace std;


int main()
{
   
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n],i,pos;

    cout<<"Enter "<<n<<" of the an array :";

    for(i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter "<<n<<" of the an array before :\n ";

    for(i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nThe enter the position between 1 and"<<n<<" of the element to be deleted :\n";
    cin>>pos;
    
    --pos;
    for(i=pos;i<=9;i++)
    {
        arr[i] = arr[i+1];
    }

    for(i= 0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}
