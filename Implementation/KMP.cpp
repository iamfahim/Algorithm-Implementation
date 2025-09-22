//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll             long long int
#define PI             acos(-1.0)
#define IOS            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf            1LL<<62
#define check          cout<<"I am in here BRO!"<<endl;
const int MOD = (int)1e9+7;
ll f[100];
string p,t;
void kmp_preprocess(string pattern)
{
    f[0]=0;
    int j = 0;
    int m=pattern.size();
    for(int i = 1; i < m; i++)
    {
        if(pattern[i]==pattern[j])
            f[i]=j+1,j++;
        else
        {
            while(j!=0)
            {
                j = f[j-1];
                if(pattern[i]==pattern[j])
                {
                    f[i] = j+1;
                    j++;
                    break;
                }
            }
        }
    }
}
bool kmp(string text, string pattern)
{
    int j = 0;
    int n=text.size();
    int m=pattern.size();
    for(int i = 0; i < n; i++)
    {
        if(text[i]==pattern[j])
        {
            if(j==m-1)
            {
                return true;
            }
            j++;
        }
        else
        {
            while(j!=0)
            {
                j = f[j-1];
                if(text[i]==pattern[j])
                {
                    j++;
                    break;
                }
            }
        }
    }
    return false;
}
int  main()
{
    IOS
    cin>>t>>p;
    kmp_preprocess(p);
    if(kmp(t,p)==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
/*
 input:abcdefghABCDEFGH
        abAB
Output:NO
input:abcdefghABCDEFGH
      abc
output:YES
*/
