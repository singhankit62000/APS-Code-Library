#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void kfactors(ll n,ll k)
{
    vector <int> arr;
    while(n%2==0)
    {
        arr.push_back(2);
        n=n/2;
    }

    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            arr.push_back(i);
            n/=i;
        }
    }

    if(n>2)
        arr.push_back(n);
    if(arr.size()<k)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
}

int main()
{
    int t;
    ll x,k;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cin>>k;
        kfactors(x,k);
    }
    return 0;
}
