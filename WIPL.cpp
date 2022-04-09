#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t,n,k;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        size_t h[n];
        for(size_t i=0;i<n;i++)
            cin>>h[i];

        size_t s1=0, s2=0, count=0, flag=0;
        sort(h,h+n,greater<size_t>());

        for(size_t i=0;i<n;)
        {
            if(s1<k && i<n)
            {
                s1=s1+h[i];
                h[i]=0;
                i++;
                count++;
            }
            if(s2<k && i<n)
            {
                s2=s2+h[i];
                h[i]=0;
                i++;
                count++;
            }
            if(s1>=k && s2>=k)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
            cout<<count<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
