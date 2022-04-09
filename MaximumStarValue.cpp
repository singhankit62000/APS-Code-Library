#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,i,j;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],count=0,count1=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            count=0;
            for(j=1;j<i;j++)
            {
                if(a[j]%a[i]==0)
                   count++;
            }
            if(count>count1)
                count1=count;
        }
        cout<<count1<<endl;
    }
    return 0;
}
