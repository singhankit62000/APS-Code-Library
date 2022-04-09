#include <bits/stdc++.h>
using namespace std;

const string sp {" "};

#define fir first
#define sec second

class solution {

    int t;
    size_t k;
    size_t n;

    public: 
        solution() {
            /*some_precomputation*/
        }

        void solve()
        {
            std::cin>>n>>k;
            set< pair<size_t, size_t> > arr;

            for(size_t i=0,p; i<=n; i++)
            {
                std::cin>>p;
                arr.insert({p, i});
            }

            for(size_t i=0; i<n; i++)
            {
                auto left = *arr.begin();
                auto right = *arr.rbegin();
                auto req = k-left.fir;
                cout<<left.sec<<sp<<left.fir<<sp<<right.sec<<sp<<req<<endl;
                arr.erase(arr.begin());
                auto it = arr.end();
                arr.erase(--it);
                arr.insert({right.fir-req, right.sec});
            }
        }

        void operator()() { std::cin>>t; while(t--) solve();}
};

int main()
{
    ios::sync_with_stdio(0);
    solution()();
    return 0;
}
