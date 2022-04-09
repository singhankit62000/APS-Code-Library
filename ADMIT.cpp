#include<bits/stdc++.h>
using namespace std;

#define ll long int

void solve();
int main()
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
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
void solve()
{
	ll n, m;
	cin >> n >> m;

	ll c[n], s[m];

	for (ll i = 0; i < n; i++)
		cin >> c[i];

	for (ll i = 0; i < m; i++)
		cin >> s[i];

	while (m--)
	{
		ll k;
		cin >> k;

		ll list[k];

		for (int i = 0; i < k; i++)
			cin >> list[i];
	}

}
