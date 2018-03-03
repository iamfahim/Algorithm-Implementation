#include<bits/stdc++.h>
using namespace std;
#define Max_size 100
vector<int>Graph[Max_size];
void bfs(int node,int source)
{
    queue<int>Q;
    Q.push(source);
    int visited[Max_size]={0},level[Max_size];
    int parent[Max_size];
    visited[source]=1;
    level[source]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0;i<Graph[u].size();i++)
        {
            int v=Graph[u][i];
            if(!visited[v])
            {
                level[v]=level[u]+1;
                parent[v]=u;
                visited[v]=1;
                Q.push(v);
            }
        }
        Q.pop();

    }
    for(int i=0;i<node;i++)
    {
        printf("%d to %d distance %d\n",source,i,level[i]);
    }
}
int main()
{
    int x,y,N,E,i;
    cout<<"Enter Nodes and Edges number :"<<endl;
    cin>>N>>E;
    for(int i=0;i<E;i++)
    {
        cin>>x>>y;
        Graph[x].push_back(y);
        Graph[y].push_back(x);
    }
        bfs(N,0);

  return 0;
}
