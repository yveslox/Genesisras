#include<string.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
 int a[2][3] ={{10,20,30},{40,50,60}};
 int *p;
 int i,j;
 
    
 cout<<"Matrix-A : "<<endl;
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
  {
    cout<<" "<<*(*(a+i)+j);
  }
  cout<<endl;
 }
 cout<<endl;
 
 
 cout<<"Matrix-A : "<<endl;
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
  {
    cout<<" "<<*(a[i]+j);
  }
  cout<<endl;
 }
 cout<<endl;
 
 p = &a[0][0];
 
 cout<<"Matrix-A : "<<endl;
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
  {
    cout<<" "<<*(p+3*i+j);
  }
  cout<<endl;
 }
 cout<<endl;
 
}
