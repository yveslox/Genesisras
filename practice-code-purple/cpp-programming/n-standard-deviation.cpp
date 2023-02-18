#include<bits/stdc++.h>

using namespace std;

float SD(float values[])
{
    float sum = 0.0,mean,sd =0.0;
    int i;

    for(i =0;i<10;i++)
    {
        sum = sum + values[i];
    }
    mean = sum/10;
    for(i=0;i<10;i++)
      sd = sd + pow(values[i]- mean ,2);
    return sqrt(sd/10);
}


int main()
{
    int i;
    float arr[10];
    
    cout<<"Enter the number to convert :";
    
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"standard Deviation = "<<SD(arr);
    
    cout<<endl;
    return 0;
}