#include<bits/stdc++.h>

using namespace std;

struct cmp{
bool operator()(int a ,int b)
{
  return a > b;
}
};

int main()
{
 //array 
 int num[5] ={3,8,1,2,9};
 
 for(int i=0;i<5;i++)
 cout<<num[i]<<" ";
 cout<<endl;
 
 //sort in decreasing order using comparator function
 sort(num, num+5,cmp());
 
 for(int i=0;i<5;i++)
 cout<<num[i]<<" ";//1,2,3,8,9
 cout<<endl; 
}
