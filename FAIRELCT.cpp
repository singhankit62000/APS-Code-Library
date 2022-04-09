#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t,n,m,a[1000],b[1000];

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(size_t i=0;i<n;i++)
            cin>>a[i];
        for(size_t i=0;i<m;i++)
            cin>>b[i];

        size_t sum=0;
        size_t sa=accumulate(a,a+n,sum);
        sum=0;
        size_t sb=accumulate(b,b+m,sum);

        if(sa>sb)
            cout<<"0"<<endl;
        else
        {
            size_t flag=0;
            sort(a,a+n);
            sort(b,b+m,greater<size_t>());
            size_t i=0,j=0,count=0;
            while(sa<=sb && i<n  && j<m)
            {
                if(a[i]<b[j] && sa<=sb)
                {
                    sa=sa-a[i]+b[j];
                    sb=sb-b[j]+a[i];
                    count++;
                }
                else if(a[i]>b[j] || sa>sb)
                {
                    break;
                }
                i++;
                j++;
            }

            if(sa>sb)
                cout<<count<<endl;
            else
                cout<<"-1"<<endl;
        }
    }


    return 0;
}
