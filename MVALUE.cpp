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
	int n;

	cin >> n;
	ll arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	ll val1, val2;
	val1 = arr[0] * arr[1] + abs(arr[0] - arr[1]);
	val2 = arr[n - 1] * arr[n - 2] + abs(arr[n - 1] - arr[n - 2]);

	cout << max(val1, val2);
}
