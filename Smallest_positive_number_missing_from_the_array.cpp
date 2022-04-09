#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
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
	ll n;
	cin >> n;

	ll arr[n], min_missing = 1;

	for (ll i = 0; i < n; i++)
		cin >> arr[i];

	for (ll i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			if (arr[i] <= min_missing)
				min_missing++;
		}
	}

	cout << min_missing;
}
