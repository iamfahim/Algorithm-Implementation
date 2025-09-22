//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62  // this is minus inf
#define ms(a,b)         memset(a, b, sizeof(a))
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
const int MOD = (int)1e9+7;
int w[20][20];
int n;
int dp[(1<<15)+2];
int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int call(int mask)
{
    if(mask==(1<<n)-1) return 0;
    if(dp[mask]!=-1) return dp[mask];
    int mn=1<<28;
    for(int i=0; i<n; i++)
    {
        if(check(mask,i)==0)
        {
            int price=w[i][i];
            for(int j=0; j<n; j++)
            {
                if(i!=j and check(mask,j)!=0)
                {
                    price+=w[i][j];
                }
            }
            int ret=price+call(Set(mask,i));
            mn=min(mn,ret);

        }
    }
    return dp[mask]=mn;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&w[i][j]);

        }
    }

    int ret=call(0);
    printf("%d\n",ret);
    return 0;
}
/*আমরা একটা প্রবলেম দিয়ে শুরু করি।
 মনে করো তোমাকে nটা দোকান থেকে n টা জিনিস কিনতে হবে।
  জিনিসগুলো কিনতে তোমার a0,a1,a2,…,a(n-1) টাকা লাগে।
 তোমার শহরটা খুব অদ্ভূত,তুমি যখন একটা জিনিস কিনে আরেক দোকানে যাও তখন সেই দোকানদার তোমার আগের কেনা জিনিসগুলো দেখে তার দোকানের জিনিসের দাম বাড়িয়ে দেয়!!
  কত দাম বাড়াবে সেটা নির্ভর করবে তুমি আগে আগে কোন কোন দোকানে গিয়েছো সেটার উপর।
  Sample input:
  2
  10 10
  90 10
Sample output:
 30
  */

