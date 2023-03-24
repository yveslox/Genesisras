#include<iostream>
using namespace std;

int main()
{
    int r,c;

    int arr[5][2]={{0,0},
                   {11,22},
                   {22,44},
                   {33,66},
                   {44,88} 
                    };
    cout<<"== Accesssing the array elements ===\n";
    for(r = 0;r<5;r++)
    {
        for(c = 0;c<2;c++)
        {
            cout<<"Arr["<<r<<"]["<<c<<"] : ";
            cout<<arr[r][c]<<endl;
        }
    }

    cout<<"\n";
    
    cout<<"== Accesssing the array elements ===\n";
    for(c = 0;c<2;c++)
    {
        for(r = 0;r<5;r++)
        {
            cout<<"Arr["<<r<<"]["<<c<<"] : ";
            cout<<arr[r][c]<<endl;
        }
    }
    cout<<endl;
}