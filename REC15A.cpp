#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    long int a;

    cin>>t;
    while(t--)
    {
        int even=0, odd=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if (n==1)
            cout<<0<<endl;
        else if(even==n || odd==n)
            cout<<n<<endl;
        else
            cout<<min(((even-1)*2 + odd),((odd-1)*2 + even))<<endl;
    }
    return 0;
}
