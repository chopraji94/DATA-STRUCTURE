#include <iostream>

using namespace std;

int main()
{
    int a[10][10],i,j,m,n,v1,v2,v;
    int qu[10];
    int visit[10]={0};
    int visited[10] = {0};
    int front = -1;
    int rare = -1;
    cout<<"Enter the number of vertices\n";
    cin>>n;
    cout<<"Enter the number of edges\n";
    cin>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j] = 0;
        }
    }

    for(int i=1;i<=m;i++)
    {
        cout<<"\nEnter\n";
        cin>>v1;
        cin>>v2;
        a[v1][v2] = 1;
    }
    cout<<"Breadth first search\n";
    cout<<"Enter the initial vertex\n";
    cin>>v;
    cout<<"Vertices are\n";
    cout<<v;
    visited[v] = 1;
    int k=1;
    while(k<n)
    {
        for(j=1;j<=n;j++)
        {
            if(a[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rare++] = j;
            }
        }
        v = qu[front++];
        cout<<v<<" ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }
}
