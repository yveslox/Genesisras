#include<iostream>
using namespace std;

int partition(int array[],int lb,int ub)
{
    int pivot=array[lb];
    int start = lb;
    int end = ub;

     while(start<end)
     {
        while(array[start]<=pivot)
        {
            start++;
        }
        while(array[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp = array[start];
            array[start]= array[end];
            array[end]=temp;
        }
     }   
    int temp =array[end];
    array[end]=array[lb];
    array[lb]= temp;        
    return end;
}

int quick_sort(int array[],int lb,int ub)
{
    while(lb>ub)
    {
        int loc = partition(array,lb,ub);
        quick_sort(array,loc+1,ub);
        quick_sort(array,lb,loc-1);
    }
    return 0;
}

int main()
{
    int arr[]={9,6,11,10,2,5};
    int n = sizeof(arr)/(sizeof(arr[0]));
    quick_sort(arr,0,n-1);
    cout<<"Elements of the array after sorting : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}