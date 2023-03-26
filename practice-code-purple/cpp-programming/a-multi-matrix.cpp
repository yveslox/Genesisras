#include<iostream>

using namespace std;

int main()
{
    int row1,col1,row2,col2,i,j,k;

    int m1[10][10], m2[10][10],pro[10][10];

    cout<<"Enter the number of rows and columns of the first matrix : ";
    cin>>row1>>col1;

    cout<<"Enter the number of rows and columns of the second matrix : ";
    cin>>row2>>col2;
    
    if(col1 == row2)
    {
    cout<<"Enter the "<<row1 * col1<<" element of the first matrix : \n";
    
    for(i = 0;i<row1;i++)
    {
        for(j = 0;j<col1;j++)
        {
            cin>>m1[i][j];
        }
    }
    
    cout<<"Enter the "<<row2 * col2<<" element of the second matrix : \n";
    
    for(i = 0;i<row2;i++)
    {
        for(j = 0;j<col2;j++)
        {
            cin>>m2[i][j];
        }
    }
    
    //calculating the multiplacation of matrix
    for(i = 0;i<row1;i++)
    {
        for(j = 0;j<col2;j++)
        { 
            pro[i][j] = 0;
            for(k = 0;k<col1;k++)
            pro[i][j] = pro[i][j] +(m1[i][k] * m2[k][j]);
        }
    }
    
    cout<<"The first matrix is : \n";
    for(i = 0;i<row1;i++)
    {
        for(j = 0;j<col1;j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
   
    cout<<"The second matrix is : \n";
    for(i = 0;i<row2;i++)
    {
        for(j = 0;j<col2;j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The product matrix is : \n";
    for(i = 0;i<row1;i++)
    {
        for(j = 0;j<col2;j++)
        {
            cout<<pro[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else 
    {
        cout<<"Matrix multiplication  can't be done ..."<<endl;
    }
    cout<<endl;

 return 0;
}