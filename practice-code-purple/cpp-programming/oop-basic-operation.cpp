#include<iostream>
#include<vector>

using namespace std;

class operation
{
public :
int num1,num2;
public :
 void input()
 {
  cout<<"Enter two numbers to perform opeartions : "<<endl;
  cin>>num1>>num2;
  cout<<endl;
 }
 public :
 void addition()
 {
  cout<<"Addition = "<<num1+num2<<endl;
  cout<<endl;
 }
 void substraction()
 {
  cout<<"substraction = "<<num1-num2<<endl;
  cout<<endl;
 }
 void multiplication()
 {
  cout<<"multiplication = "<<num1*num2<<endl;
  cout<<endl;
 }
 void division()
 {
  cout<<"division = "<<(float)num1/num2<<endl;
  cout<<endl;
 }
};

int main()
{

  operation op;
  cout<<"calling the input function ";
  op.input();

  cout<<"calling the addition function : ";
  op.addition();
  
  cout<<"calling the addition function : ";
  op.substraction();

  cout<<"calling the addition function : ";
  op.multiplication();

  cout<<"calling the addition function : ";
  op.division();

  cout<<"Exiting the main method"<<endl;

  return 0;

}