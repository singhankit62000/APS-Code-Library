#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,u,s;
    vector<int> arr;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        s=0;
        for(int i=0;i<n;i++)
        {
            cin>>u;
            if(u>=k)
            s=s+(u-k);
        }
        cout<<s<<endl;
    }

    return 0;
}
