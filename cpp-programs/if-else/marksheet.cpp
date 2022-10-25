#include<bits/stdc++.h>
using namespace std;

int main()
{
 int m;;
 
 cout<<"Enter the marks:::";
 cin>>m;
 
 if(m>=80) 
 {
  cout<<"Grade = A +"<<endl; 
 }
 else
 {
  if(m>=70)
  {
   cout<<"Grade = A"<<endl;
  }
  else
  {
   if(m>=60)
   {
    cout<<"Grade = B"<<endl;
   }
   else
   {
    if(m>=40)
    {
     cout<<"Grade = C"<<endl;
    }
    else
    {
     cout<<"Grade = F"<<endl;
    }
   }
  }  
 }
 
}
