/*************************************************************************************************************

   PURPOSE : TO RETURN TWO PRIME NUMBERS WHICH SUM UP TO THE GIVEN EVEN NUMBER (GREATER THAN 2)

   AUTHOR : ANKIT KUMAR SINGH

**************************************************************************************************************/


#include <stdio.h>

int checkPrime(int a)
{
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==2)
    return a;
    else return 0;
}

int main()
{
	//code
	int t,n;

	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%d",&n);

	    for(int i=1;i<=n;i++)
	    {
	        int b=checkPrime(i);
	        if(b>0)
	        {
	            int c=n-b;
	            int p=checkPrime(c);
	            if(p>0)
	            {
	             printf("%d %d",i,c);
	             break;
	            }
	            else
	            continue;

	        }
	    }

	    t--;
	    printf("\n");

	}
	return 0;
}
