#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[120];
    cin>>t;
    while(t--)
    {
        string str;
        cin>>n;
        cin>>str;
        int sum= count(str.begin(),str.end(),'1');

        int v = 90;
        int diff = 120-n;

        if((sum+diff) < v)
        cout<<"NO"<<endl;
        else if((sum+diff) >= v)
        cout<<"YES"<<endl;

    }

    return 0;
}
