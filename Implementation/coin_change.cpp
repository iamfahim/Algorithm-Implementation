#include<bits/stdc++.h>
using namespace std;
int coin[]={5,8,11,15,18};
int make;
int dp[6][100];
int call(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
        int ret1=0,ret2=0;
    if(amount-coin[i]>=0)ret1=call(i,amount-coin[i]);
    ret2=call(i+1,amount);
    return dp[i][amount]=ret1|ret2;
}
/* jodi coin input diye taka ai coin array ar coin diye banano jay taile 1 return korbe na hole zero return korbe.
amar jodi dorkar hoy sorbocchp koyta coin banano jay tahole just ret1+ret2 kor dilei cholbe.*/
int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        cout<<call(0,make)<<endl;
    }
    return 0;
}
/*
stdin  copy
100
2
1
0
3
4
5
7
9
10
450
45
23
15
  stdout  copy
1
0
0
1
0
0
1
0
0
1
0
1
1
1
*/
