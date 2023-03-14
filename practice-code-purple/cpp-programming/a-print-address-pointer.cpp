#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;


int main()
{
    int i,size;
    cout<<"\n===============================\n";
    cout<<"Enter the size of the array ";
    cout<<"\n===============================\n";
    
    cin>>size;
   
    int array[size];
    int *ptr;
    
    cout<<"\n===============================\n";
    cout<<"Enter the elements of an array : ";
    cout<<"\n===============================\n";
    
    for(i = 0;i<size;i++)
    {
        cin>>array[i];
    }

    cout<<"\n===============================\n";
    cout<<"Displaying an adress using an array : ";
    cout<<"\n===============================\n";
    
    for(i = 0;i<size;i++)
    {
        cout<<"Address of "<<array[i]<<"Using array is ==>"<<&array[i]<<endl;
    }

    cout<<"\n===============================\n";
    cout<<"Displaying an adress using an pointers : ";
    cout<<"\n===============================\n";
    
    for(i = 0;i<size;i++)
    {
        ptr = &array[i];
        cout<<"Address of "<<array[i]<<"Using pointer is ==>"<<ptr<<endl;
    } 

    cout<<"\n================================\n";
    return 0;
}
