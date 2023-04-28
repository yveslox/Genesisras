#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    int cost[10][10],i,j,k,n,e,top,v,stk[10],visit[10],visited[10];

    cout<<"Enter the number of vertices in the graph : ";
    cin>>n;

    cout<<"Enter the number of edges in the graph : ";
    cin>>e;

    cout<<"Enter the start and end vertex of the edges : ";

    for(k =1;k<=e;k++)
    {
        cin>>i>>j;
        cost[i][j] = 1;
    }

    cout<<"Enter the initial vertex to start the dfs traversal with : ";
    cin>>v;

    cout<<"The DFS traveersal on the given graph is : \n";
    cout<<v<<" ";

    visited[v]=1;

    k = 1;

    while(k<n)
    {
        for(j = n;j>=1;j--)
        {
            if(cost[v][j] != 0 && visit[j] != 1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }

        }
        v = stk[--top];
        cout<<v<<" ";
        k++;

        visit[v] = 0;

        visited[v] = 1;
    }
    cout<<"\n";

    return 0;
}