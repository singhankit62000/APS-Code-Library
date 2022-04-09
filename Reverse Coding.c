/*******************************************************************************************************
  PURPOSE : REVERSE CODING
  DATE : 03/09/2019
  AUTHOR : ANKIT KUMAR SINGH
*******************************************************************************************************/

#include <stdio.h>

int main()
{
	//code

	int t;
	float m,n;

	scanf("%d",&t);

	while(t>0)
	{
	    scanf("%f %f",&n,&m);
	    //scanf("%ld",&m);
	    if(m==((n*(n/2))+(n/2)))
	    printf("1\n");
	    else
	    printf("0\n");

	    t--;
	}
	return 0;
}
