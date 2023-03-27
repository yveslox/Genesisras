#include<iostream>
#include<math.h>
using namespace std;

int findmin(int a[],int n)
{
    int mn = a[0];
    for(int i = 0;i<n;i++)
    {
        mn = min(mn,a[i]);
    }
    return mn;
}

int findmax(int a[],int n)
{
    int mx = a[0];
    for(int i = 0;i<n;i++)
    {
        mx = max(mx,a[i]);
    }
    return mx;
}

int main()
{
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n],i,pos;

    cout<<"Enter the "<<n<<" elements of the array : \n";

    for(i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int mn = findmin(arr,n);

    int mx = findmax(arr,n);

    cout<<"The smallest element in the entered array is : "<<mn<<endl;

    cout<<"The largest element in the entered array is : "<<mx<<endl;

    cout<<endl;
}