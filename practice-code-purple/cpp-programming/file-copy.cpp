#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    fstream newfile;

    newfile.open("tpoint.txt",ios::out);
    if(newfile.is_open())
    {
        newfile<<"Boo "<<endl;
        newfile.close();
    }

    newfile.open("tpoint.txt",ios::in);
    if(newfile.is_open())
    {
        string tp;
        while(getline(newfile,tp))
        {
        cout<<tp<<endl;
        }
        newfile.close();
    }
}