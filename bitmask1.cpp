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
template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);
}   // M is prime}
template <class T> inline T bpow(T p,T e)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}
using namespace std;
const int MOD = (int)1e9+7;
ll solve(ll arr[],ll sz,ll val)
{
    ll Count=0;
    ll two=2;
    for(ll i=0; i<(ll)bpow(two,sz); i++)
    {
        ll sum=0;
        for(ll j=0; j<sz; j++)
        {
            if(i&1<<j)
            {
                sum+=arr[j];
            }
        }
        if(sum>=val)Count++;
    }
    return Count;
}
int  main()
{
    IOS
    ll arr[]= {1,2,3};
    ll n=3;
    ll val=3;
    ll ans=solve(arr,n,val);
    cout<<ans<<endl;
    return 0;
}
/*Let's take a problem,
 given a set, count how many subsets have sum of elements greater than or equal to a given value.*/
