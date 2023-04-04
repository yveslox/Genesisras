#include<bits/stdc++.h>
using namespace std;

#define OUT 0
#define IN 1

unsigned  countword(char *str)
{
    int state = OUT;
    unsigned wc = 0;

    while(*str)
    {
        if(*str == ' ' || *str =='\n' || *str=='\t')
        state = OUT;

        else if(state == OUT)
        {
            state = IN;
            ++wc;
        }

        ++str;
    }
    return wc;
}

int main()
{
    char str[] = "one two three\n four\t five";
    cout<<"No of words : "<<countword(str)<<endl;
    return 0;
}