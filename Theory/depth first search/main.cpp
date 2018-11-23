#include <iostream>

using namespace std;

int main()
{
    int i,j,k,m,n,v1,v2,v,ar[10][10],stk[10];
    int visit[10] = {0};
    int visited[10] = {0};
    int top=-1;
    cout<<"Enter the number of vertices\n";
    cin>>n;
    cout<<"Enter the number of edges\n";
    cin>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            ar[i][j] = 0;
        }
    }

    for(i=1;i<=m;i++)
    {
        cout<<"\nEnter\n";
        cin>>v1;
        cin>>v2;
        ar[v1][v2] = 1;
    }
    cout<<"Depth first search\n";
    cout<<"ENter the initial vertex\n";
    cin>>v;
    cout<<"Vertices are\n";
    cout<<v;
    k=1;
    visited[v] = 1;
    while(k<n)
    {
        for(j=n;j>=1;j--)
        {
            if(ar[v][j]!=0 && visit[j]!=1 && visited[j]!=1)
            {
               visit[j] =1;
                stk[top++] = j;
            }
        }
        v = stk[--top];
        cout<<v<<" ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }
}
