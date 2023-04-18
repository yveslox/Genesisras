#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selection_sort(int arr[],int n)
{
    
    for(int step = 1;step < n-1;step++)
    {
        int min_idx = step;
        for(int i = step + 1;i < n;i++)
        {
            if(arr[i] < arr[min_idx])
            min_idx = i;
        }
    }
}

void printarray(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={20,12,10,15,2};
    int n = sizeof(arr)/(sizeof(arr[0]));
    
    selection_sort(arr,n);
    printarray(arr,n);
    cout<<endl;
    return 0;
}