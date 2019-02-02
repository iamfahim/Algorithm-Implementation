#include<bits/stdc++.h>
using namespace std;
double mysqrt(int X)
{
   double low=0.0;
   double high=X;
   double mid;
   while(high-low>.000000001)
   {
       mid=(low+high)/2;
       if(mid*mid*mid>X)
       {
           high=mid;
       }
       else
       {
           low=mid;
       }
   }
   return mid;
}
int main()
{
    int a;
    cin>>a;
    cout<<mysqrt(a)<<endl;
}
