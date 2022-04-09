#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    long int t;
    ll ts;
    cin>>t;
    while(t--)
    {
        ll count=0;
        cin>>ts;
        if(ts%2==0)
        {
            while(ts%2==0&&ts>0)
            {
                ts=ts/2;
            }
        }
           if(ts%2!=0)
        {
            count=count+ts/2;
        }

        if(count<=0)
            count=0;
        cout<<count<<endl;
    }

    return 0;
}
