#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int t=n;
  	// Complete the code to print the pattern.
  	 while(t>0)
        {
  	for(int i=0;i<2*t-1;i++)
    {


        for(int j=0;j<2*t-1;j++)
            {
                printf("%d",t);
            }

            t--;
            printf("\n");
        }


    }
    return 0;
}
