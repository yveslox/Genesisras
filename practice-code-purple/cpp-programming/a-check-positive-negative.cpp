#include<iostream>
using namespace std;


int main()
{
   int a[100],i,n,zero=0,pos=0,neg=0;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the element : \n";

    for(i =0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Element in array is given below";

    for(i =0;i<n;i++)
    {
        if(a[i]>0)
        pos++;
        else if(a[i]<0)
        neg++;
        else 
        zero++;
    }
    cout<<"Positive no. is = "<<pos<<endl;
    cout<<"Negative no. is = "<<neg<<endl;
    cout<<"Total zero in array is = "<<zero<<endl;
    return 0;
}
