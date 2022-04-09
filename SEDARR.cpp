#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t,n,k,a[100];

    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        for(int i=0;i<n;i++)
            cin>>a[i];

        size_t sum=0;
        size_t s=accumulate(a,a+n,sum);

        if(s%k==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }

    return 0;
}
