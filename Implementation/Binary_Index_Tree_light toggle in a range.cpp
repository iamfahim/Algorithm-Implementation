//Bismillahir Rahmanir Rahim
// solution LightOJ 1080
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
#define mx 100001
int sum[mx];
int read(int idx){
    int ans = 0;
    while (idx > 0){
        ans += sum[idx];
        idx -= (idx & -idx);
    }
    return ans;
}
void update(int idx ,int val){
    while (idx <= mx){
        sum[idx] += val;
        idx += (idx & -idx);
    }
}
bool isOn(int i)
{
	return read(i)%2==1;
}
void toggle(int start,int end)
{
	update(start,1);
	update(end+1,-1);
}
int main()
{
    //IOS
    //freopen("input.txt","r",stdin);
    int tt;
    scanf("%d",&tt);
    int Case=0;
    while(tt--)
    {
        ms(sum,0);
        //ms(a,0);
        int q;
        char s[mx];
        scanf(" %s",s);
        int len=strlen(s);
        /*for(int i=0,j=1; i<len; i++)
        {
            if(s[i]=='1')a[j++]=1;
            else a[j++]=0;
        }*/
       // build(1,1,len);
        scanf("%d",&q);
        printf("Case %d:\n",++Case);
        while(q--){
            char ch;
            int x,y;

            scanf(" %c",&ch);
           // printf("%c",ch);
          // check
            if(ch=='I')
            {
                scanf("%d %d",&x,&y);
                toggle(x,y);
            }
            else if(ch=='Q')
            {
                scanf("%d",&x);
                bool ok=isOn(x);
                if(s[x-1]=='1')
                {
                    if(ok)
                    {
                        printf("0\n");
                    }
                    else
                    {
                        printf("1\n");
                    }
                }
                else{
                printf("%d\n",ok);
                }
            }
        }
    }
    return 0;
}

