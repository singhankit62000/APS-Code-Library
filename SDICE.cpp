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
		cout << "\n";
	}

	return 0;
}

void solve()
{
	ll n, res = 0, d;

	cin >> n;

	vector<int> v;

	v.push_back(20);
	v.push_back(36);
	v.push_back(51);
	v.push_back(60);

	int temp = n % 4;

	if (temp == 0)
	{
		res += 44 * (n / 4);
		res += 16;
	}
	else
	{
		res += 44 * (n / 4);
		res += 4 * (4 - temp);
		res += v[temp - 1];
	}

	if (n <= 4)
	{
		cout << v[n - 1];
		return;
	}

	cout << res;
}