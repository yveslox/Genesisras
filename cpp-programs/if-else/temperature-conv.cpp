#include<bits/stdc++.h>
using namespace std;

int main()
{
 int choice;
 float temp,cnvtemp;
 
 cout<<"Temp convertion menu : "<<endl;
 cout<<"1.Farenheit to celsius."<<endl;
 cout<<"2. Celsuis to farenheit."<<endl;
 cout<<"Enter your choice :";
 cin>>choice;
 
 if(choice == 1)
 {
  cout<<"Enter temp in farenheit :";
  cin>>temp;
  cnvtemp =(temp-32)/1.8;
  cout<<"------------------------"<<endl;
  cout<<"The temp in celsuis is = "<<cnvtemp<<endl;
 }
 
 else
 {
  cout<<"Enter temp in celsuis :";
  cin>>temp;
  cnvtemp =(1.8*temp)+32;
  cout<<"------------------------"<<endl;
  cout<<"The temp in farenheit is = "<<cnvtemp<<endl;
 }
 
}
