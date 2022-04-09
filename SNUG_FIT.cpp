#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,n;
   long int *a;
   cin>>t;
   while(t--)
   {
       cin>>n;
       int n1=2*n;
       a=(long int *)malloc((2*n)*sizeof(long int));
       for(int i=0;i<n1;i++)
        cin>>*(a+i);
       for(int i=0;i<n1-1;i++)
       {
           for(int j=i+1;j<n1;j++)
           {
               if(*(a+j)>*(a+i))
               {
                   int u=*(a+j);
                   *(a+j)=*(a+i);
                   *(a+i)=u;
               }
           }
       }
       long int s=0;
       for(int i=1;i<2*n;i=i+2)
        s=s+*(a+i);
       cout<<s<<endl;
       free(a);
   }
  return 0;
}
