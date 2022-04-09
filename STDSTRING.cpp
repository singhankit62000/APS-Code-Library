#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int n = str.length();
        if(n%2!=0)
            cout<<"-1"<<endl;
        else
            {
                    int o= count(str.begin(), str.end(), '1');
                    int z= count(str.begin(), str.end(), '0');
                    if(z==0 || o==0)
                        cout<<"-1"<<endl;
                    else
                    cout<<abs(z-o)/2<<endl;
            }
    }

    return 0;
}
