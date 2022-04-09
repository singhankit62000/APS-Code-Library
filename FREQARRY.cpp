#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
        cout<<"prekrasnyy"<<endl;
        else
        cout<<"ne krasivo"<<endl;
    }
}