#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    printf("x y z  xy+z\n");
    
    for(x=0;x<=1;x++)
    {
        for(y=0;y<=1;y++)
        {
            for(z=0;z<=1;z++)
            {
                if( (x && y)|| z)
                {
                    cout<<("%d\t%d\t%d 1\n",x,y,z);
                }
                else 
                {
                    cout<<("%d\t%d\t%d 0\n",x,y,z);
                }
            }
        }
    }
    cout<<endl;
    //return 0;
}