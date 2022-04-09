#include <bits/stdc++.h>
using namespace std;

class Base
{
	int a, b;
public:
	void getBase()
	{
		cout << "Enter a and b:" << endl;
		cin >> a >> b;
	}
	void putBase()
	{
		cout << "a = " << a << ", b = " << b << endl;
	}
}

class Derived: public Base
{
	int c, d;
public:
	void getDerived()
	{
		cout << "Enter c and d:" << endl;
		cin >> c >> d;
	}
	void putDerived()
	{
		cout << "c = " << c << ", d = " << d << endl;
	}
}

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

	Derived obj;
	obj.getDerived();
	obj.putDerived();
	obj.getBase();
	obj.putBase();

	return 0;
}