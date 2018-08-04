#include<bits/stdc++.h>
using namespace std;
#define CLR(a) memset(a,-1,sizeof(a))
int dp[100];

int fibonacci(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    else
    {
        dp[n]=fibonacci(n-1)+fibonacci(n-2);
        return dp[n];
    }
}
int main()
{
    CLR(dp);
    int number;
    cin>>number;
    cout<<fibonacci(number)<<endl;
    return 0;
}
/*
0->0
1->1
2->1
3->2
4->3
5->5
6->8
7->13
8->21
*/
