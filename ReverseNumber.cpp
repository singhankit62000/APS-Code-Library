#include <bits/stdc++.h>


using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int n1=0,a;
       while(n>0)
       {
           a=n%10;
           n1=n1*10+a;
           n=n/10;

       }

       cout<<n1<<endl;
    }

    return 0;
}
