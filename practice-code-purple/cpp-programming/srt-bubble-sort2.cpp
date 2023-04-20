#include<iostream>
#include<vector>

using namespace std;

int n;

void printelems(vector <int> list)
{
    for(int i =0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;
}


void bubble_sort(vector <int> & a )
{
    int i,j,k,swap,flag;
    int len = a.size();
    
    for(int i = len;i>0;i--)
    {
        flag = 0;
        for(j = 0,k=1;k<i;j++,k++)
        {
            if(a[j] < a[k])
            {
             swap = a[j];
             a[j] = a[k];
             a[k] = swap;
             flag = 1;
            }
        }
        cout<<"The elements of the list after pass "<<n - i + 1<<" are : ";
        printelems(a);
        if(flag == 0)
        {
            cout<<"Terminator in the "<<n - i + 1<<" Pass out of "<<n<<" passes due to the optimized logic"<<endl;
            break;
        }
    }
}


int main()
{
    int i,num;
    vector <int> v;

    cout<<"Enter the number of integers you want to sort : ";
    cin>>n;

    cout<<endl;


    for(i = 0;i<n;i++)
    {
        cout<<"Enter number"<<i+1<<" : ";
        cin>>num;
        v.push_back(num);
    }

    cout<<"The elements of the list before applying the bubble sort are : ";

    printelems(v);

    bubble_sort(v);

    cout<<"The elements of the list affter applying the bubble sort are : ";

    printelems(v);

    cout<<endl;
    return 0;
}