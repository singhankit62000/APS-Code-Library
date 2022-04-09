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

void convert(int &hr, string suff)
{
    if (suff == "AM")
    {
        if (hr == 12)
            hr = 0;
    }
    else
    {
        if (hr != 12)
            hr += 12;
    }
}

bool in_range(int hr1, int min1, int hr2, int min2)
{
    if (hr1 < hr2)
        return true;
    if (hr1 > hr2)
        return false;
    if (min1 <= min2)
        return true;
    return false;
}

void solve()
{
    int n;

    string meet_time, meet_suff;
    cin >> meet_time >> meet_suff;

    int meet_hr = 0, meet_min = 0;

    meet_hr = meet_time[0] - '0';
    meet_hr = meet_hr * 10 + (meet_time[1] - '0');
    meet_min = meet_time[3] - '0';
    meet_min = meet_min * 10 + (meet_time[4] - '0');

    convert(meet_hr, meet_suff);

    string start_time, start_suff;
    string end_time, end_suff;

    int start_hr = 0, start_min = 0;
    int end_hr = 0, end_min = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> start_time >> start_suff;
        cin >> end_time >> end_suff;

        start_hr = 0;
        start_min = 0;
        end_hr = 0;
        end_min = 0;

        start_hr = start_time[0] - '0';
        start_hr = start_hr * 10 + (start_time[1] - '0');
        end_hr = end_time[0] - '0';
        end_hr = end_hr * 10 + (end_time[1] - '0');

        convert(start_hr, start_suff);
        convert(end_hr, end_suff);

        start_min = start_time[3] - '0';
        start_min = start_min * 10 + (start_time[4] - '0');
        end_min = end_time[3] - '0';
        end_min = end_min * 10 + (end_time[4] - '0');

        if (in_range(start_hr, start_min, meet_hr, meet_min) and in_range(meet_hr, meet_min, end_hr, end_min))
            cout << "1";
        else
            cout << "0";

    }
}
