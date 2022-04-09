#include<bits/stdc++.h>
using namespace std;

#define ll long long int

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

	ll t = 1;
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
	vector <string> v(3);
	int x = 0, o = 0, u = 0, res = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
		x += count(v[i].begin(), v[i].end(), 'X');
		o += count(v[i].begin(), v[i].end(), 'O');
		u += count(v[i].begin(), v[i].end(), '_');
	}

	cout << x << " " << o << " " << u;

	if (o > x)
		res = 3;
	else if ()

	}
