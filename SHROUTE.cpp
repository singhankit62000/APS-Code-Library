#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1e7

void solve();

bool checkGandhi(int n)
{
	if (n == 0)
		return false;

	while (n != 1)
	{
		if (n % 4 != 0)
			return false;

		n = n / 4;
	}

	return true;
}

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

int power(int x, int y)
{
	int res = 1;
	while (y)
	{
		if (y % 2 == 1)
			res = (res * x);
		y = y >> 1;
		x = (x * x);
	}
	return res;
}

void solve()
{
	int num;
	cin >> num;

	cout << power(2, num) - 1;
}