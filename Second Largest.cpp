#include <iostream>

using namespace std;

int main()
{
  long int t,a,b,c;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c;
    int l1,l2;
    if((a>b)&&(a>c))
    if(b>c)
        cout<<b;
    else cout<<c;

    if((b>a)&&(b>c))
        if(a>c)
        cout<<a;
    else cout<<c;

    if((c>a)&&(c>b))
        if(a>b)
        cout<<a;
    else cout<<b;

    cout<<endl;
  }

  return 0;
}
