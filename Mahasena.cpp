#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],c_even,c_odd,i;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
            c_even=0;
            c_odd=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                c_even++;
            else
                c_odd++;
        }

        if(c_even>c_odd)
            cout<<"READY FOR BATTLE"<<endl;
        else
            cout<<"NOT READY"<<endl;

    return 0;
}
