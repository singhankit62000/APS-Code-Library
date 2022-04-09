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
	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
void solve()
{
	int n, a[100];
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int flag = 1;
	string str;

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		getline(cin, str);
		cout << str << endl;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'y')
				count++;
		}

		cout << count << endl;

		if (count != a[i])
			flag = 0;
	}

	if (flag)
		cout << "YES";
	else
		cout << "NO";
}
