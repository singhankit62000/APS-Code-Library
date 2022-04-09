#include <bits/stdc++.h>
using namespace std;

typedef long int ll;

int main()
{
    ll t,x,k;
    cin>>t;

    while(t--)
    {
        deque<ll> dq;
        ll count=INT_MAX, v, count1;
        cin>>k>>x;
        v=x;

        if(x%2==0)
        {
            dq.push_back(2);
            x = x/2;
        }

        while(x%2==0)
        {
            x = x/2;
            dq.back() *= 2;
        }

        for(ll i=3;i<=sqrt(x);i=i+2)
        {
            if(x%i==0)
            {
                dq.push_back(i);
                x = x/i;

                while(x%i==0)
                    {
                        x = x/i;
                        dq.back() *= i;
                    }
            }
        }
        if(x>2)
            dq.push_back(x);

        if(dq.size()<=k)
        {
            ll u=k-dq.size();
            count=0;
            while(!dq.empty())
            {
                count += dq.front();
                dq.pop_front();
            }
            count += u;
        }
        else if(dq.size()>k)
        {
            int u=dq.size()-(k-1);
            for(int i=0;i<dq.size()-1;i++)
            {
                int s=dq[i];
                int j;
                for(j=i+1;j<u;j++)
                {
                    s=s*dq[j];
                }
                count1=accumulate(dq.begin(),dq.end(),s);
                count = min(count1, count);
            }
        }

        cout<<count<<endl;

    }

    return 0;
}
