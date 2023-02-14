#include<bits/stdc++.h>

using namespace std;

char findgrade(int score)
{
    
    if(score < 0 || score > 100)
    {
        return '\0';
    }
    
    switch(score / 10)
    {
        case 10:
        case 9:
         return 'A';
        case 8:
         return 'B';
        case 7:
         return 'C';
        case 6:
         return 'D';
        case 5:
         return 'E';
        default:
         return 'F';
    }
}

int main()
{
    int score;
    char grade;

    cout<<"Enter score(0-100):";
    cin>>score;

    grade = findgrade(score);

    if(grade=='\0')
     cout<<"Invalid Score"<<endl;
    else 
     cout<<"Grade = "<<grade<<endl;
    return 0;
}