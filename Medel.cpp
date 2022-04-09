#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100],i,d,p;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            int max=a[0],min=a[n-1];
            p=0;d=n-1;
       for(i=0;i<n;i++)
       {
           if(a[i]>max)
            {
                max=a[i];
                p=i;
            }
           else if(a[i]<min)
            {
                min=a[i];
                d=i;
            }
       }

       if(d<p)
        printf("%d %d\n",min,max);
       else if(d>p)
        printf("%d %d\n",max,min);

    }
    return 0;
}
