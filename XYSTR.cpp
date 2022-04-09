#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;

    cin>>t;
    while(t--)
    {
        int p1=0,p2=0,p=0;
        cin>>s;
        for(int i=0;i<s.length()-1;i++)
        {
            int f=0;
            if(s[i]=='x'&&s[i+1]=='y')
            {p1++;f=1;}
            if(s[i]=='y'&&s[i+1]=='x')
            {p1++;f=1;}
            if(f==1)
                i++;
        }
        p=max(p1,p2);
        cout<<p<<endl;
    }
    return 0;
}

