#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define mod 1e15

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

void solve()
{
	int a, b;
	cin >> a >> b;

	if (b - a == 1)
		cout << -1;
	else
	{
		// if (a % 2 == 0)
		// 	cout << a << " " << a + 2;
		// else if (a + 3 <= b)
		// 	cout << a + 1 << " " << a + 3;
		// else if (b - 3 >= a)
		// 	cout << b - 3 << " " << b - 1;
		// else if (b % 2 == 0)
		// 	cout << b - 2 << " " << b;
		// else
		// 	cout << -1;
		if (a % 2 == 0)
			cout << a << " " << a + 2;
		else if (a + 3 <= b)
			cout << a + 1 << " " << a + 3;
		else
			cout << -1;
	}
}