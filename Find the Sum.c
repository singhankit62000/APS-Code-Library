#include <stdio.h>
int main()
{
    int t;
    long int n,a,p,q;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%ld%ld",&n,&a);
        long int b[n];
        while(a>0)
        {
            scanf("%ld%ld",&p,&q);
            for(int i=0;i<n;i++)
            scanf("%ld",&b[i]);


            a--;
        }

        t--;
    }
}
