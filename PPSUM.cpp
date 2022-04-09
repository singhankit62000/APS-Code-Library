#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,d;
   cin>>t;
   while(t--)
   {
       cin>>d>>n;
       int s=n;
       for(int i=0;i<d;i++)
       {
           s=(s*(s+1))/2;
       }
       cout<<s<<endl;
   }
   return 0;
}

