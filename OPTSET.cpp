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

	vector<ll> arr(n);
	unordered_map<ll, ll> hmp;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		hmp[arr[i]]++;
	}

	ll maxSum = 0, sum1 = 0, sum2 = 0, maxOcc = INT_MAX;
	for (int i = 0; i <= n; i++)
	{
		sum1 += arr[i];
		sum2 = 0;
		for (int j = i; j <= n; j++)
		{
			if (hmp[arr[j]] < 2)
				break;
			else
			{
				sum2 += arr[j];
				maxOcc = min(maxOcc, hmp[arr[j]]);
			}
		}

		if (maxOcc < n)
			maxSum = max(maxSum, max((sum2 * maxOcc), sum1));
		else
			maxSum = max(maxSum, sum1);
		cout << maxSum;
	}
}
