//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ms(a,b)         memset(a, b, sizeof(a))
#define filein      freopen("input.txt", "r", stdin)
#define fileout     freopen("output.txt", "w", stdout)
#define debug       cout<<"Hello, i am in here."<<endl;
#define bit_cnt(mask) __builtin_popcountll(mask)
#define ll long long int
#define dst(u,v,x,y) sqrt((x*1.0-u*1.0)*(x*1.0-u*1.0)+(y*1.0-v*1.0)*(y*1.0-v*1.0))
template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}
using namespace std;
const int MOD = (int)1e9+7;
ll cost[20][20];
ll dp[1024];
ll solve(ll n)
{
    ll two=2;
    for(ll i=0;i<(ll)bpow(two,n);i++)
    {
      dp[i]=INT_MAX;
    }
    dp[0]=0;
    for(ll mask=0;mask<(ll)bpow(two,n);mask++)
    {
      ll x=bit_cnt(mask);
      for(ll j=0;j<n;j++)
      {
          if((mask&1<<j)==0)
          {
              dp[mask|1<<j]=min(dp[mask|1<<j],dp[mask]+cost[x][j]);
          }
      }
    }
    return dp[(ll)bpow(two,n)-1];
}
int  main()
{
    IOS
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>cost[i][j];
        }
    }
    ll ans=solve(n);
    cout<<ans<<endl;
    return 0;
}
/*There are N persons and N tasks, each task is to be alloted to a single person.
 We are also given a matrix cost of size N*N , where cost[i][j] denotes, how much person i is going to charge for task j.
 Now we need to assign each task to a person in such a way that the total cost is minimum.
 Note that each task is to be alloted to a single person, and each person will be alloted only one task.
 INPUT:
 3

1 2 3

6 5 4

8 1 2
OUTPUT:
6
*/

