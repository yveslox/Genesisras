#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[100],c = 'a';

    int n = 0,i =0;

    cout<<"Enter the string you want to find the length : ";
    cin>>s1;

    while(c!='\0')
    {
        c = s1[i];
        i++;
    }

    n = i  - 1;

    cout<<"Length of the entered string "<<s1<<" is : "<<n<<endl;
    
    return 0;
}