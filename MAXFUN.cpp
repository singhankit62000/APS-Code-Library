#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];

        for(ll i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        ll x=0,y=(n/2),z=n-1;

        ll ans=abs(a[x]-a[y])+abs(a[y]-a[z])+abs(a[z]-a[x]);

        cout<<ans<<endl;
    }

    return 0;
}
