#include<bits/stdc++.h>
using namespace std;

#define int long long int

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
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}

int bitwiseXor(int n)
{
	if (n % 4 == 0)
		return n;
	if (n % 4 == 1)
		return 1;
	if (n % 4 == 2)
		return n + 1;

	return 0;
}

int evenXor(int l, int r)
{
	int xor_left, xor_right;
	xor_right = 2 * bitwiseXor(r / 2);
	xor_left = 2 * bitwiseXor((l - 1) / 2);
	return xor_left ^ xor_right;
}

void solve()
{
	int n;
	cin >> n;

	vector<int> a(n, 0), b(n, 0);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	int ans = 0;
	for (int i = 1; i < n; i++)
	{
		ans += min(abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]), abs(b[i] - a[i - 1]) + abs(a[i] - b[i - 1]));
	}
	cout << ans;
}
