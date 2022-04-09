#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
     cin>>n;
     char c[n];
     cin>>c;
     int y=0,no=0,i=0;
     for(int j=0;j<n;j++)
        {
            if(c[j]=='Y')
            {
               y++;
            }
            else if(c[j]=='I')
            {
                i++;
            }
            else if(c[j]=='N')
            {
                no++;
            }
        }
        if((y>0)&&(i==0))
            cout<<"NOT INDIAN"<<endl;
        else if((i>0)&&(y==0))
            cout<<"INDIAN"<<endl;
        else
            cout<<"NOT SURE"<<endl;
   }
   return 0;
}

