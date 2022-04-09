#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll mod = 998244353;

void solve();

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
	ll n, ele;
	vector<int> odd, even;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		if (ele % 2 == 0)
			even.push_back(ele);
		else
			odd.push_back(ele);
	}

	if (odd.size() == 0)
		cout << -1;
	else if (even.size() == 0)
	{
		if (odd.size() % 2 != 0)
			cout << -1;
		else
		{
			for (auto i : odd)
				cout << i << " ";
		}
	}
	else if (even.size() % 2 != 0 and odd.size() % 2 != 0)
	{
		for (int i = 0; i < odd.size() - 1; i++)
			cout << odd[i] << " ";
		for (int i = 0; i < even.size(); i++)
			cout << even[i] << " ";
		cout << odd.back();
	}
}
