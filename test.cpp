#include<bits/stdc++.h>
using namespace std;
void solve();
void PrintPattern(int m);
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

void PrintPattern(int m)
{
	if (m > 0)
	{
		cout << m << '\n';
		PrintPattern(m - 5);
	}

	cout << m << '\n';
}

void solve()
{
	PrintPattern(16);
}
