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
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}

	return 0;
}
void solve()
{
	ll n, k;
	cin >> n >> k;
	ll arr[n];

	for (ll i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n, greater<int> ());

	for (ll i = 0; i < k; i++)
	{

	}
}
