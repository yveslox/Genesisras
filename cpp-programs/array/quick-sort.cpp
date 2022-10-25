#include<bits/stdc++.h>
using namespace std;

int main()
{
void str(int[],int,int);
int i;
int a[10],count = 0,n;

cout<<"Enter 10 values in unsorted order:::"<<endl;
for(n=0;n<10;n++)
{
 cout<<"Value no.: "<<(n +1)<<"\t";
 cin>>a[n];
 count++;
}
cout<<endl;
n = 0;

str(a,n,count-1);

cout<<"After sorting:::";
cout<<endl;
for(n=0;n<10;n++)
{
 cout<<"Position "<<(n+1)<<"\t"<<a[n]<<endl;
}
}

////////////////////////////////////////////////////
void str(int k[20],int lb,int ub)
{
 int i,j,key,flag=0,temp;
 
 if(lb<ub)
 {
  i = lb;
  j = ub +1;
  key = k[i];
  
  while(flag!=1)
  {
   i++;
   while(k[i]<key)
   {
    i++;
   }
   j--;
   while(k[j]>key)
   {
    j--;
   }
   if(i<j)
   {
    temp = k[i];
    k[i] =k[j];
    k[j] = temp;
   }
   else
   {
    flag = 1;
    temp = k[lb];
    k[lb] = k[j];
    k[j] = temp;
   }
  }
  str(k,lb,j-1);
  str(k,j+1,ub); 
 }
}
