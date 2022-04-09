#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,p[100],i,j,flag;
  cin>>t;
  while(t--)
  {
      cin>>n;
      for(i=1;i<=n;i++)
        cin>>p[i];
        int count=1;

      for(i=2;i<=5;i++)
      {
          flag=0;
          for(j=1;j<i;j++)
          {
              if(p[i]>=p[j])
              {
                  flag=1;break;
              }
          }
           if(flag==0)
            count++;
      }
      for(i=6;i<=n;i++)
      {
          flag=0;
          for(j=i-5;j<i;j++)
          {
              if(p[i]>=p[j])
              {
                  flag=1;break;
              }
          }
           if(flag==0)
            count++;
      }

cout<<count<<endl;
  }
  return 0;
}


