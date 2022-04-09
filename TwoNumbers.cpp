#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int a,b,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld%ld",&a,&b,&n);
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                a=a*2;
            else b=b*2;
        }
        int c,d;
        c=max(a,b);
        d=min(a,b);
        if(d>0)
        printf("%ld\n",c/d);

    }
    return 0;
}
