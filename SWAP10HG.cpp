#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t,n,s0=0,s1=0,p1=0,p0=0;
    string s,p;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        cin>>p;

        s0=count(s.begin(),s.end(),'0');
        p0=count(p.begin(),p.end(),'0');

        s1=count(s.begin(),s.end(),'1');
        p1=count(p.begin(),p.end(),'1');

        if(s0==p0 && s1==p1)
            {
                size_t a=-1, b=-1;
                for(size_t i=s.length()-1;i>=0;i--)
                    if(s[i]=='1')
                {
                    a=i;
                    break;
                }
                for(size_t i=p.length()-1;i>=0;i--)
                    if(p[i]=='1')
                {
                    b=i;
                    break;
                }

                if(a>b)
                    cout<<"No"<<endl;
                else
                    cout<<"Yes"<<endl;
            }
        else
            cout<<"No"<<endl;
    }

    return 0;
}
