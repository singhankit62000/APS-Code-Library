#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,b;
    cin>>t;
    while(t--)
    {
        cin>>b;
        int s=(b/2)-1;
        int p=0;
        p=s*(s+1)/2;
        cout<<p<<endl;
    }
    return 0;
}
