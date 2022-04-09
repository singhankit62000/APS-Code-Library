#pragma GCC optimize("Os")

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(!(n && (!(n&(n-1)))))
        {
            cout<<"2 3 1";
            if(n>3)
            {
                for(int i=4;i<=n;i++)
                {
                    if(i && (!(i&(i-1))))
                    {
                        cout<<" "<<i+1<<" "<<i;
                            i++;
                    }
                    else
                    cout<<" "<<i;
                }
            }
        }
        else
            cout<<"-1";
        cout<<endl;
    }

    return 0;
}
