#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    string s;

    cin>>n;
    cin>>s;

    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<=(i+n)&&j<s.length();j++)
        {
            cout<<s[j];
        }

        cout<<endl;
    }

    return 0;
}
