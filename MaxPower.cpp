#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    int ans=0;
    char x[100000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=n-1;i>=0;i--)
    {
        if(x[i]=='0')
            ans++;
        else
            break;
    }

    cout<<ans<<endl;
    return 0;
}
