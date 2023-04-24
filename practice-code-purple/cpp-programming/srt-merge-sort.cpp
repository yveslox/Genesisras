#include<iostream>
#include<vector>

using namespace std;

void printelems(vector <int> list )
{
    int i;
    int len = list.size();
    for(i = 0;i<len;i++)
    cout<<list[i]<<" ";
}

void merge(vector<int> & a,int low,int high, int mid)
{
    int i,j,k;

    int c[50];

    i = low;
    k = low;
    j = mid + 1;

    while(i<=mid && j <= high)
    {
        if(a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else 
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }

     while(j<=high)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    for(i=low;i<k;i++)
    {
        a[i] = c[i];
    } 

}


void mergeSort(vector <int> & a,int low, int high)
{
    int mid;

    if(low<high)
    {
        mid=(low +high)/2;

        mergeSort(a,low,mid);

        mergeSort(a,mid + 1,high);

        mergeSort(a,low,high);
    }
}

int main()
{
    int i,num,n;

    vector <int> v;

    cout<<"enter the number of integers you want to sort : ";

    cin>>n;

    cout<<endl;

    for(i = 0;i<n;i++)
    {
        cout<<"Enter number "<<i +1<<" : ";
        cin>>num;
        v.push_back(num);
    }

    cout<<"The elements of the list before appplying the merge sort are : ";

    printelems(v);

    mergeSort(v,0,n-1);

    cout<<"The elements of the list after applying the merge sort are : ";
    
    printelems(v);

    cout<<endl;

    return 0;
}