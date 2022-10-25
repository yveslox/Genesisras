#include<bits/stdc++.h>
using namespace std;

int n = 1;

int main()
{
 int n = 2;
 {
  int n = 3;
  {
   int n = 4;
   cout<<"In inner n = "<<n<<endl;
   cout<<"Global n = "<<::n<<endl;
  }
  cout<<"In outer n = "<<n<<endl;
  cout<<"Global n = "<<::n<<endl;
 }
 cout<<"In main() n = "<<n<<endl;
 cout<<"Global n = "<<::n<<endl;
}
