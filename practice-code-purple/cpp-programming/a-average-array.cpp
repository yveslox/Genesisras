#include<iostream>
#include<math.h>

using namespace std;

double Average(int *arr, int size);

int main()
{
    int i,n;
    double avg;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int average[n];
    cout<<"Enter the average Elements "<<endl;
    
    for(i = 0;i<n;i++)
    {
        cin>>average[i];
    }

    cout<<"The average value of an Array is :"<<Average(average,n)<<endl;
    return 0;
}

double Average(int *arr,int size)
{
    int i,sum = 0;
    double avg;

    for(i = 0;i<size;i++)
    {
        sum += arr[i];
    }
    avg = double(sum)/size;

    return avg;
}
