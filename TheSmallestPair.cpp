#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            //long int s,s1=a[0]+a[n-1];
        for(long int i=0;i<n-1;i++)
           {
               for(long int j=i+1;j<n;j++)
               {
                   if(a[i]>a[j])
                   {
                       t=a[i];
                       a[i]=a[j];
                       a[j]=t;
                   }
               }
           }
           cout<<a[0]+a[1]<<endl;

    }
}
