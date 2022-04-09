#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,tr,ts,dr,ds,tr1[100],dr1[100],ts1[100],ds1[100],i,j;
    scanf("%d",&t);
    while(t--)
    {
        int flag=1;
        scanf("%d",&tr);
        for(i=0;i<tr;i++)
            scanf("%d",&tr1[i]);
        scanf("%d",&dr);
        for(i=0;i<dr;i++)
            scanf("%d",&dr1[i]);
        scanf("%d",&ts);
        for(i=0;i<dr;i++)
            scanf("%d",&ts1[i]);
        scanf("%d",&ds);
        for(i=0;i<dr;i++)
            scanf("%d",&ds1[i]);

        for(i=0;i<ts;i++)
        {
            for(j=0;j<tr;j++)
                {
                    if(ts1[i]==tr1[j])
                    {
                        flag=0;
                        break;
                    }
                    else
                        flag=1;
                }
        }

        for(i=0;i<ds;i++)
        {
            for(j=0;j<dr;j++)
                {
                    if(ds1[i]==dr1[j])
                    {
                        flag=0;
                        break;
                    }
                    else
                        flag=1;
                }
        }

        if(flag==1)
            printf("no\n");
        else if(flag==0)
            printf("yes\n");

    }

    return 0;

}
