#include<bits/stdc++.h>
using namespace std;

int main()
{
 int num[5]={3,8,1,2,9};
 
 sort(num,num+5);
 
 for(int i = 0;i<5;i++)
 cout<<num[i]<<" ";
 cout<<endl;
 
 cout<<binary_search(num,num +5,3)<<endl;
 cout<<binary_search(num,num +5,4)<<endl;

}
