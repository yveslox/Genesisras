#include<iostream>
#include<math.h>
#include<bits/stdc++.h>


using namespace std;

int maxsubarray(int m[],int n)
{
    int sum = 0,s =0,i;

    for(i = 0;i<n;i++)
    {
        s += m[i];
        if(s < 0)
        s = 0;

        sum = max(s,sum);
    }
    sort(m,m+n);
    if(m[n - 1]<0)
    sum = m[n - 1];

    return sum;
}


int main()
{
    int i,n,sum = 0;
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

    n = sizeof(arr)/sizeof(arr[0]),

    cout<<"The "<<n<<" elements of the array are : ";

    for(i = 0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
        sum = maxsubarray(arr,n);

        cout<<"The maximum sum of the subarray of the given array is : "<<sum;

        cout<<endl;
    return 0;
}