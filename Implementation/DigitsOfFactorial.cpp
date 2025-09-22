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
double intlog(double base, double x) {
    return (log(x) / log(base));
}
int findDigitsOfFactorial(int n,int b)
{
    if (n < 0)return 0;
    if (n <= 1)return 1;
    double x = ((n * intlog((double)b,(double)(n / M_E)) +
                 intlog((double)b,(double)2 * M_PI * n) /
                 2.0));
    return floor(x) + 1;
}
int  main()
{
    IOS
    int t;
    cin>>t;
    int Case=0;
    while(t--)
    {
        int num,base;
        cin>>num>>base;
        int tam=findDigitsOfFactorial(num,base);
       // cout<<tam<<endl;
        printf("Case %d: %d\n",++Case,tam);
    }
    return 0;
}
/*
input:
5

5 10

8 10

22 3

1000000 2

0 100
Output:
Case 1: 3

Case 2: 5

Case 3: 45

Case 4: 18488885

Case 5: 1
*/
