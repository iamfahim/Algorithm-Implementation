#include<bits/stdc++.h>
using namespace std;
#define max_size 100
int Count;
int row,column;
int flag[max_size][max_size]={0};
char grid[max_size][max_size];
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
void floodfill(int i,int j)
{
    if(i<0 || j<0 || i>=row || j>=column)
    {
        return ;
    }
    if(grid[i][j]=='.' && flag[i][j]==0)
    {
        Count++;
        flag[i][j]=1;
        for(int m=0;m<8;m++)
        {
            int x=i+fx[m];
            int y=j+fy[m];
            floodfill(x,y);
        }
    }
}
int main()
{
    int T,Case=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&row,&column);
        getchar();
        for(int i=0;i<row;i++)
        {
            scanf("%s",grid[i]);
        }
        bool flg=false;
        Count=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(grid[i][j]=='.' && flag[i][j]==0)
                {
                    floodfill(i,j);
                    flg=true;
                    break;
                }
            }
            if(flg)
            {
                break;
            }
        }
        printf("Case %d: %d\n",++Case,Count);
    }
    return 0;
}
/*stdin  copy
1
8 8
##.@##@#
....#.#.
..#.#.##
#...####
#.#.#...
#.@.@##.
@.@.@.#.
#.......
  stdout  copy
Case 1: 30*/


