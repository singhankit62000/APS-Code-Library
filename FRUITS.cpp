#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,m,k;
  cin>>t;
  while(t--)
  {
     cin>>n>>m>>k;
     int d=abs(n-m);
     if(k>=d)
     {
         k=0;
     }
     else if(k<d)
     {
         k=d-k;
     }
     cout<<k<<endl;
  }
  return 0;
}
