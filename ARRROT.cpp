#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define MOD 1000000007

void solve();

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}

void solve()
{
	int n, q;

	cin >> n;
	ll a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> q;
	ll x[q];
	for (int i = 0; i < q; i++)
		cin >> x[i];

	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}

	sum = (sum % MOD + MOD) % MOD;

	for (int i = 0; i < q; i++)
	{
		sum = sum * 2;
		sum = (sum % MOD + MOD) % MOD;
		cout << sum << endl;
	}
}
