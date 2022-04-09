#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    ll n,k,i,j,a1,b1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[10000];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);



        for(i=0;i<k%(3*n);i++)
        {
            a1=a[i%n];
            b1=a[n-(i%n)-1];
            a[i%n]=a1^b1;

        }
      if((n%2!=0)&&(k%(3*n)>=0)&&(k%(3*n)<=(n/2))&&(k>(n/2)))
        a[n/2]=0;

        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
  return 0;
}
