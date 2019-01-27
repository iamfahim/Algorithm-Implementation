//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define ull            unsigned long long
#define min3(a,b,c)    min(a,min(b,c))
#define min4(a,b,c,d)  min(a,min(b,min(c,d)))
#define max3(a,b,c)    max(a,max(b,c))
#define max4(a,b,c,d)  max(a,max(b,max(c,d)))
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
ll dp[1000];
ll number;
ll LIS(ll index,ll prevalue)
{
    if(index>number)
    {
        return 0;
    }
    ll ans1=LIS(index+1,prevalue);
    ll ans2=0;
    if(dp[index]>prevalue)
    {
       ans2=LIS(index+1,dp[index])+1;
    }
    return (max(ans1,ans2));
}
int  main()
{
    IOS
    cin>>number;
    for(ll i=1;i<=number;i++)
    {
        cin>>dp[i];
    }
    cout<<LIS(1,0)<<endl;
    return 0;
}
/*
INPUT:
8
1 5 3 4 8 -2 9 3
OUTPUT:
5
*/
