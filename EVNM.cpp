#include<bits/stdc++.h>
using namespace std;

void printSpiral(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // x stores the layer in which (i, j)th
            // element lies
            int x;

            // Finds minimum of four inputs
            x = min(min(i, j), min(n-1-i, n-1-j));

            // For upper right half
            if (i <= j)
                printf("%d ", (n-2*x)*(n-2*x) - (i-x)
                    - (j-x));

            // for lower left half
            else
                printf("%d ", (n-2*x-2)*(n-2*x-2) + (i-x)
                    + (j-x));
        }
        printf("\n");
    }
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        printSpiral(n);
    }

    return 0;
}
