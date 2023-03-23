#include<iostream>
using namespace std;


int main()
{
   
    int i,n;
    double sum = 0, average = 0;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" of the an array : "<<endl;

    for(i =0;i<n;i++)
    {   
        cout<<"Enter arra["<<i<<"] : ";
        cin>>arr[i];
    }
    
    cout<<"Element of the an array before :\n ";

    for(i =0;i<n;i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        sum += arr[i];
    }

    average = sum/n;

    cout<<"The sum of the elements of the array is : "<<sum<<endl;
    
    cout<<"The average of elements of array is : "<<average<<endl;

    cout<<endl;
    return 0;
}
