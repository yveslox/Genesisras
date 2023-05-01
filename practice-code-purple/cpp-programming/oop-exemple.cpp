#include<iostream>
#include<vector>

using namespace std;

class stdt
{
private :
int value;
public :
 void input()
 {
  cout<<"Entering the input function "<<endl;

  cout<<"Entered a integer you want to display : ";
  cin>>value;
  cout<<"Exiting the input()"<<endl;
 }
void display()
{
  cout<<"Entering the disispaly() function "<<endl;

  cout<<"The value entered is : ";
  cout<<value<<endl;
  cout<<"Exitin the display() function "<<endl;
}
};

int main()
{

  stdt object;
  cout<<"calling the input function ";
  object.input();

  cout<<"calling display ";
  object.display();

  cout<<"Exiting the main method"<<endl;

  return 0;

}