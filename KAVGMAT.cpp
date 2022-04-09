#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> dp;


void preFix(int n, int m)
{
    // Initialize rest table with sum
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }
}


long long int getSum(int r1, int c1, int l) {
    if (l == 0) {
        return 0;
    }
    int r2 = r1 + l - 1;
    int c2 = c1 + l - 1;
    return dp[r2][c2] - dp[r2][c1 - 1] - dp[r1 - 1][c2] + dp[r1 - 1][c1 - 1];
}

// Utility Function to count the submatrix
// whose sum is greater than the S
long long int countMat(int p, int n, int m)
{
    long long int count = 0;
    //long long int subMatSum = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int max_poss_l = min(n - i + 1, m - j + 1);
            int l = 0, r = max_poss_l, mid;
            while (l < r) {
                mid = (l + r + 1) / 2;
                if (p > (getSum(i, j, mid) / (mid * mid))) {
                    l = mid;
                }
                else {
                    r = mid - 1;
                }
            }
            count += (max_poss_l - l);
        }
    }
    return count;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        int s;
        cin >> n >> m >> s;
        dp.clear();
        dp.resize(n + 1, vector<long long int>(m + 1));

        //vector<vector<long long int>> mat(n, vector<long long int>(m));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> dp[i][j];
            }
        }

        preFix(n, m);

        long long int count = countMat(s, n, m);
        cout << count << endl;
    }
    return 0;
}
