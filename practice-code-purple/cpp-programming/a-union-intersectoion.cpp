#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void printunion(int arr1[], int arr2[], int m ,int n )
{
 int i = 0,j = 0;

 while(i<m && j < n)
 {
    if(arr1[] < arr2[])
    cout<<arr1[i++]<<" ";
    else if(arr2[j] < arr1[i])
    cout<<arr2[j++]<<" ";
    else {
        cout<<arr2[j++]<<" ";
        i++;
    }
 }

 while(i<m)
 cout<<arr1[i++]<<" ";
 while(j<n)
 cout<<arr2[j++]<<" ";
}

int main()
{

    int arr1[] = {1,2,4,5,6};
    int arr2[] = {2,3,5,7};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    printunion(arr1,arr2,m,n);    
    cout<<"\n================================\n";
    return 0;
}
