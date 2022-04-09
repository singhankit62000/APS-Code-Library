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
	ll n, m, k, res = 0;

	cin >> n >> m >> k;

	ll arr[n][m];

	ll d = min(n, m);
	ll e = max(n, m);

	for (int i = 1; i <= d; i++)
	{
		res = res xor ((2 * i) + k);
	}

	if (e - d > 1)
	{

		if ((e - d) % 2 == 0)
		{
			res = res xor (d + 2 + k);
			res = res xor (m + n + k);
		}
		else
		{
			res = res xor (d + 2 + k);
			res = res xor (m + n + k);

			for (int i = 2; i <= d - 1; i++)
			{
				res = res xor (i + d + (((e - d) / 2) + 1) + k);
			}
		}


	}
	else if (e - d == 1)
	{
		for (int i = 1; i <= d; i++)
		{
			res = res xor (i + e + k);
		}
	}

	cout << res;
}
