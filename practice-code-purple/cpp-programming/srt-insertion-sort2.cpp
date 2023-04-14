#include<iostream>
using namespace std;

int insertion_sort(int n,int array[])
{
    int j;
    for(int i = 0;i<n;i++)
    {
            int temp=array[i];
            j = i-1;
            while(j>=0 && array[j]>temp)
            {
                array[j+1]=array[j];
                j--;
            }
        array[j+1]=temp;
    }
    return 0;
}

int main()
{
    int arr[]={5,9,3,2,4,10,6};
    int n = sizeof(arr)/(sizeof(arr[0]));
    insertion_sort(n,arr);
    cout<<"Elements eftare sorting of array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}