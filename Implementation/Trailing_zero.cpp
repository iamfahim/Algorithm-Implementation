#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using namespace std;
ll zero(ll number,ll factor)
{
    ll total,deno;
    if(number==5)
        return 1;
    total=0;
    deno=factor;
    while(deno<number)
    {
        total+=number/deno;
        deno*=factor;
    }
    return total;
}

int main()
{
    IOS
    ll N,c2,c1;
    while(cin>>N)
    {
        c1=zero(N,2);
        c2=zero(N,5);
        if(c1<c2)
            cout<<c1<<endl;
        else
            cout<<c2<<endl;
    }
    return 0;
}
/*
17! =
355687428096000. It has 3 last zero digits
*/
