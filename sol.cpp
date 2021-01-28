#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m, k, l, r;
		cin >> n >> m >> k >> l >> r;
		vector<int> c(n), p(n);
		for (int i = 0; i < n; i++) {
			cin >> c[i] >> p[i];
		}
		// set the price to max integer
		int price = INT_MAX;
		for (int i = 0; i < n; i++) {
			// run a loop for 'm' minutes to get the final temperature
			for (int j = 0; j < m; j++) {
				// here are the three conditions that was stated in the problem
				if (c[i] >= k - 1 && c[i] <= k + 1) {
					c[i] = k;
				} else if (c[i] > k + 1) {	
					c[i]--;
				} else if (c[i] < k - 1) {
					c[i]++;
				}
			}
			// check if the temperature is within the range while getting the mininum price
			if (c[i] >= l && c[i] <= r && p[i] < price) {
				price = p[i];
			}
		}
		cout << (price == INT_MAX ? -1 : price) << '\n';
	}
	return 0; 
}
