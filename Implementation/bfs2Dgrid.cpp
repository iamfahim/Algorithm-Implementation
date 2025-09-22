#include<bits/stdc++.h>
#include<stdio.h>
#define pii pair<int,int>
#define Maximum_size 22
using namespace std;
int ctn;
int w,h;
char graph[Maximum_size][Maximum_size];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
void bfs(int x,int y)
{
    queue<pii>q;
    q.push(pii(x,y));
    graph[x][y]='#';
    while(!q.empty())
    {
        pii top=q.front();
        for(int i=0;i<4;i++)
        {
            int f=top.first+fx[i];
            int s=top.second+fy[i];
            if(f>=0 && f<h && s>=0 && s<w && graph[f][s]=='.')
            {
                graph[f][s]='#';
                q.push(pii(f,s));
            }
        }
        q.pop();
        ctn++;
    }
}
/* This is the solution of lightOJ OJ problem number 1012*/
int main()
{
    int T,Case=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&w,&h);
        getchar();
        for(int i=0;i<h;i++)
        {
            scanf("%s",graph[i]);
        }
        ctn=0;
        bool flag=false;
        for(int i=0;i<h;i++)
        {
             for(int j=0;j<w;j++)
             {
                  if(graph[i][j]=='@')
                  {
                       bfs(i,j);
                       flag=true;
                       break;
                  }

             }
             if(flag)
             {
                  break;
             }
        }
        printf("Case %d: %d\n",++Case,ctn);
    }
    return 0;
}

