#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int fact=1;
        cin>>n;
        for(int i=1;i<=n;i++)
            fact=fact*i;

            cout<<fact<<endl;
    }
    return 0;
}
