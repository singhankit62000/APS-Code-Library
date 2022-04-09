#include <bits/stdc++.h>
using namespace std;
long long int findXor(long long int n)
{
	int mod=n%4;
	if(mod==0)
	return n;
	else if(mod==1)
	return 1;
	else if(mod==2)
	return n+1;
	else if(mod==3)
	return 0;
 } 
int main()
{
	long long int t,l,r,x,i;
	scanf("%lld",&t);
	while(t--)
	{		
		scanf("%lld%lld",&l,&r);
		x=(findXor(l-1)^findXor(r));
		
		if(x%2==0)
		printf("Even\n");
		else 
		printf("Odd\n");
	}	
	return 0;
}
