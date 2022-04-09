#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(((a==b)&&(c==d)&&(a!=c)&&((a*a + c*c)==(b*b+d*d)))||((b==c)&&(d==a)&&(b!=a)&&((a*a + c*c)==(b*b+d*d)))||(((a==c)&&(b==d)&&(a!=b))&&((a*a + b*b)==(c*c+d*d)))||(a==b)&&(c==d)&&(a==c))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

