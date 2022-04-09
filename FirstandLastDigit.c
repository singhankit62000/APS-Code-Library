#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a=n%10;
        int b;
        while(n>0)
        {
            b=n%10;
            n=n/10;
        }

        cout<<a+b<<endl;
    }

    return 0;
}
