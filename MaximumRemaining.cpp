#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,c=0;
    cin>>n;
    long long int a[100000];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]%a[j]>c)
            c=a[i]%a[j];
        }
    }
    cout<<c<<endl;
    return 0;
}
