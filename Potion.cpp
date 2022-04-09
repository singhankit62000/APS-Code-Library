#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,count=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        d=arr[i];
        arr[i]=0;
        int s=0;
        for(int j=n-1;j>=0;j--)
        {
            s+=arr[j];
            if(s+arr[j-1]>d)
                break;

            arr[j]=0;
        }
        count+=d;
    }

    size_t sum=0;
    size_t p=accumulate(arr,arr+n,sum);

    cout<<2*(count)+p<<endl;

    return 0;
}
