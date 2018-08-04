#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long
i64 dp[66][33];
i64 nCr(int n,int r)
{
    if(n==r)return dp[n][r]=1;
    if(r==0)return dp[n][r]=1;
    if(r==0)return dp[n][r]=(i64)n;
    if(dp[n][r])return dp[n][r];
    return dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
}
/* n=10,r=5
result=252
*/
