#include<iostream>
#include<chrono>
#include<thread>
#include<unistd.h>

using namespace std;

int main()
{
 int a[10][10]={0},i,j,low=0,top=9,n=1;
 
 for(i=0;i<5;i++,low++,top--)
 {
    for(j=low;j<=top;j++,n++)
    a[i][j] = n;
    for(j=low+1;j<=top;j++,n++)
    a[i][top] = n;
    for(j=top-1;j>=low;j--,n++)
    a[top][j] = n;
    for(j=top-1;j>low;j--,n++)
    a[i][low] = n;
 }
 cout<<"\t\tPerfect square\n";

 for(i=0;i<10;j++)
 {
    for(i=0;i<10;j++)
    {
     cout<<("%6d",a[i][j]);
     usleep(1);
    }
 }
 cout<<endl;
 return (0);   
}