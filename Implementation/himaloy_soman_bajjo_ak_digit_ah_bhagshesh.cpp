#include<bits/stdc++.h>
using namespace std;
int main()
{
    char bhajjo[1000];
    long long i,bhajok,bhagshesh=0;

    scanf("%s",bhajjo);
    scanf("%lld",&bhajok);

    int l=strlen(bhajjo);

    for(i=0; i<l; i++)
    {
        bhagshesh = ((bhagshesh*10) + (bhajjo[i]-'0') )%bhajok; // Amra character theke integer e convert kore nilam '0' biyog kore
    }
    printf("%lld\n",bhagshesh);
    return 0;
}
