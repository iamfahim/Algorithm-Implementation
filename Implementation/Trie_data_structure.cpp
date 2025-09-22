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
#define N 25000
ll ch[N][26],num[N],ss=0,f[N],isword[N];
void inser(string s)
{
    ll u=0;
    for(ll i=0;i<s.size();i++)
    {
        ll c=s[i]-'a';
        if(!ch[u][c])ch[u][c]=++ss;
        u=ch[u][c];
    }
    isword[u]=1;
}
bool isWord(string s)
{
    ll u=0;
    for(ll i=0;i<s.size();i++)
    {
        ll c=s[i]-'a';
        if(!ch[u][c])return false;
        u=ch[u][c];
    }
    if(isword[u]==1)return true;
    return false;
}
int  main()
{
    IOS
    string a;
    string x;
    for(ll i=1;i<=5;i++)
    {
        cin>>a;
        inser(a);
    }
    cin>>x;
    if(isWord(x)==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
