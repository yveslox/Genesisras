#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

     if(left< n && arr[left] > arr[largest])
     largest = left;

     if(right<n && arr[right] >arr[largest])
     largest = right;

     if(largest != i)
     {
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
     }
}


void heap_sort(int arr[],int n)
{
    for(int i = n /2-1;i>=0;i--)
    heapify(arr,n,i);

    for(int i = n - 1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,n,i);
    }
}

void printarray(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<"";
        cout<<"\n";
    }
}
int main()
{
    int arr[]={9,6,11,10,2,5};
    int n = sizeof(arr)/(sizeof(arr[0]));
    heap_sort(arr,n);
    cout<<"Elements of the array after sorting : "<<endl;
    printarray(arr,n);
    cout<<endl;
    return 0;
}