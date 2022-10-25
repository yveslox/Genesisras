#include<bits/stdc++.h>
using namespace std;

int fibonacci_number(int n)
{
     if(n==0)
      {
        return 0;
      }
     if(n==1)
      {
        return 1;
      }
  return fibonacci_number(n-1)+fibonacci_number(n-2);
}

int main()
{
int i;
  for(i=1;i<=10;i++)
   {
     cout<<fibonacci_number(i)<<endl;
   }
}
