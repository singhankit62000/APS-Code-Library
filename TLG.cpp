#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1000],s,t,u=0,v=0,t1=0,s1=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t>>s;
		t1=t1+t;
		s1=s1+s;
		if(abs(t1-s1)>u)
		{
			u=abs(t1-s1);
			if(t1>s1)
			v=1;
			else if(s1>t1) 
			v=2;
		}
	}
	cout<<v<<" "<<u<<endl;
return 0;	
}
