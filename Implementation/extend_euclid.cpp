#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 ex_euclid(i64 a,i64 b, i64 &X, i64 &Y)
{
    if (b == 0)
    {
        X = 1;
        Y = 0;
        return a;
    }

    i64 xx, yy;

    i64 g = ex_euclid(b, a%b, xx, yy);

    X = yy;
    Y = xx-yy*(a/b);

    return g;
}
int main()
{
    i64 a,b,x,y;
    cin >> a >> b;
    i64 gcd = ex_euclid(a,b,x,y);
    cout << x << " " << y << " " << gcd << endl;
    return 0;
}
/* input:
   a=84,b=23;
   gcd(a,b)=1;
   x=-3,
   y=11
   */

