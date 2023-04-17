#include<iostream>
using namespace std;

int getMax(int array[],int n)
{
    int max = array[0];
    for(int i = 1;i<n;i++)
    if((array[i]>max))
    max = array[i];
        return max;
}

void counntingsort(int arr[],int n,int place)
{
    const int max = 10;
    int output[n];
    int count[max];

     
    for(int i = 0;i<max;i++)
    count[i] = 0;

    for(int i = 0;i<n;i++)
    count[(arr[i]) /place % 10]++;

    for(int i = 0;i<max;i++)
    count[i] += count[i -1];
    
    for(int i = 0;i<max;i++)
    {
        output[count[(arr[i]/place)%10]-1]= arr[i];
        count[(arr[i]/place)%10]--;
    }
    
    for(int i = 0;i<n;i++)
    arr[i] = output[i];
}


void radix_sort(int arr[],int n)
{
    int max = getMax(arr,n);

    for(int i = 1;max/i >0;i*=10)
    {
        counntingsort(arr,n,i);
    }
}

void printarray(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int arr[]={121,432,564,23,1,45,788};
    int n = sizeof(arr)/(sizeof(arr[0]));
    
    radix_sort(arr,n);
    printarray(arr,n);
    cout<<endl;
    return 0;
}