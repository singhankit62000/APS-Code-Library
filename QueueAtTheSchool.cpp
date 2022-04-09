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
	int n, t;
	cin >> n >> t;

	string str;
	cin >> str;

	int len = str.length();
	while (t--)
	{
		for (int i = 0; i < len - 1; i++)
		{
			if (str[i + 1] == 'G' && str[i] == 'B')
			{
				str[i] = 'G';
				str[i + 1] = 'B';
				i++;
			}
		}
	}

	cout << str;
}
