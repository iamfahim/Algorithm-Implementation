#include<bits/stdc++.h>
using namespace std;
#define Max_size 100
int main(){
    int n,m;
    cout<<"Enter the number of row and edges :"<<endl;
    cin>>n>>m;

int indegree[Max_size]= {0};
vector<int>ans;
vector<int>adj[Max_size];
int a,b;
for(int i=0; i<m; i++)
{
    scanf("%d %d",&a,&b);
    adj[a].push_back(b);
    indegree[b]++;
}
queue<int>q;
for(int i=1; i<=n; i++)
{
    if(indegree[i]==0)
    {
        q.push(i);
    }
}
while(!q.empty())
{
    int u=q.front();
    ans.push_back(u);
    for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        indegree[v]--;
        if(indegree[v]==0)
        {
            q.push(v);
        }
    }
    q.pop();
}

printf("%d ",ans[0]);
for(int x=1; x<n; x++)
{
    printf("%d ",ans[x]);
}
printf("\n");
return 0;
}
/*
stdin
5 4
1 2
1 3
1 4
2 3
  stdout
Enter the number of row and edges :
1 5 2 4 3
*/
