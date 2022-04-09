#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    int u=a[j];
                    a[j]=a[i];
                    a[i]=u;
                }
            }
        }
        int s=0;
        for(int i=1;i<n;i++)
        {
            s=s+abs(a[0]-a[i]);
        }
         cout<<s<<endl;
    }
    return 0;
}
