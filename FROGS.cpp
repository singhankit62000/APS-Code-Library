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
	int n, w[1000], l[1000];
	cin >> n;

	pair<int, int> p[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
		p[i] = make_pair(w[i], i);
	}
	for (int i = 0; i < n; i++)
		cin >> l[i];

	sort(p, p + n);

	int hit = 0;

	int lastPosition = p[0].second;

	for (int i = 1; i < n; i++)
	{
		int curPosition = p[i].second;
		int index = p[i].second;

		while (curPosition <= lastPosition)
		{
			curPosition += l[index];
			hit++;
		}

		lastPosition = curPosition;
	}

	cout << hit;
}
