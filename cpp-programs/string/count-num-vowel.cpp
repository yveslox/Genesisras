#include<string.h>
#include<bits/stdc++.h>
using namespace std;

const int Max = 80;

int main()
{
char line[81];
int vowctr = 0,conctr = 0;

cout<<"Enter a string (max 80 character):";
fgets(line,80,stdin);

int i;
for(i=0;line[i]!='\0';i++)
{
 switch(line[i])
 {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
     vowctr++;
     break;
 default :
     conctr++;
     break;
 }
}

cout<<"The number of vowels = "<<vowctr<<endl;
cout<<"The number of consonants = "<<conctr<<endl;
}
