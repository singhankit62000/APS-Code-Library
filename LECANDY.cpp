#include <iostream>
using namespace std;
int main()
{
   int t,n;
   long long int c,a[100];
   cin>>t;
   while(t--)
   {
       long int s=0;
       cin>>n>>c;
       for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        if(s<=c)
            cout<<"Yes\n";
        else
            cout<<"No\n";
   }
   return 0;
}
