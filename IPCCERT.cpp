#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,t,q,m,c=0,sum1=0;
    cin>>n>>m>>k;
    long long int a[n][k+1];
    for(long long int i=0;i<n;i++)
    {
        sum1=0;
        for(long long int j=0;j<k+1;j++)
        {
            cin>>a[i][j];
            if(j<k)
                sum1+=a[i][j];
            else if(sum1>=m && a[i][j]<=10)
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
