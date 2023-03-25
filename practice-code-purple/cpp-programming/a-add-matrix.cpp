#include<iostream>

using namespace std;

int main()
{
    int row,col,i,j;

    int m1[10][10], m2[10][10],sum[10][10];

    cout<<"Enter the number of rows and columns of the matrix : ";
    cin>>row>>col;

    cout<<"Enter the "<<row * col<<" element of the first matrix : \n";
    
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            cin>>m1[i][j];
        }
    }

    cout<<"Enter the "<<row * col<<" element of the second matrix : \n";
    
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            cin>>m2[i][j];
        }
    }
    
    //calculating the sum of matrix
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    
    cout<<"The first matrix is : \n";
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
   
    cout<<"The second matrix is : \n";
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The sum matrix is : \n";
    for(i = 0;i<row;i++)
    {
        for(j = 0;j<col;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}