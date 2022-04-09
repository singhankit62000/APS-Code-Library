#include<bits/stdc++.h>
using namespace std;
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
	int n, c;

	cin >> n >> c;

	string str;
	cin >> str;

	int j = 0, cnt = 0, one[n];

	for (int i = 0; i < n; i++)
	{
		if (str[i] == '1')
		{
			cnt++;
		}
	}

	// cout << cnt << endl;

	int d = n / (c + 1);

	// cout << d << endl;

	if (cnt < d)
		cout << "NO";
	else
		cout << "YES";
}
