#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[40000];
    scanf("%d",&t);
    while(t--)
    {
        int count=0,count1=0,count2=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            count1++;
            else if(a[i]==0)
            count2++;
        }
        count1--;
        count2--;
        count=(((count1*(count1+1))/2)+((count2*(count2+1))/2));
        printf("%d\n",count);
    }
}
