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
ll findDigits(ll n)
{
    if(n<0)return 0;
    if(n<=1)return 1;
    double x=((n*log10(n/M_E))+(log10(2*M_E*n)/2.0));
    return floor(x)+1;
}
int  main()
{
    IOS
    ll num;
    cin>>num;
    cout<<findDigits(num)<<endl;
    return 0;
}
/*
input:5
output:3
5!=120
3 digits
*/
