#include <bits/stdc++.h>
using namespace std;
int dp[12] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i < 12; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	int cnt; cin >> cnt;
	while (cnt--) {
		int tmp; cin >> tmp;
		cout << dp[tmp] << endl;
	}
	
}