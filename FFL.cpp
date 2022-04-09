#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,a[100][2];
    cin>>t;
    while(t--)
    {
       cin>>n>>s;
       for(int i=0;i<2;i++)
       {
           for(int j=0;j<n;j++)
           {
               cin>>a[j][i];
           }
       }
       int u=100-s;
       int min1=0,min2=0;
       for(int i=0;i<n;i++)
       {
           if(a[i][1]==1)
           {
               if(min1==0)
                min1=a[i][0];
               else if(min1>a[i][0])
               min1=a[i][0];
           }
           else if(a[i][1]==0)
           {
               if(min2==0)
                min2=a[i][0];
               else if(min2>a[i][0])
                min2=a[i][0];
           }
       }
       if((min1+min2<=u)&&(min1!=0)&&(min2!=0))
        cout<<"yes"<<endl;
       else
        cout<<"no"<<endl;
    }
    return 0;
}
