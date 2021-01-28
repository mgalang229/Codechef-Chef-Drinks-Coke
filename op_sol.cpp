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
		// set ans to 10 million
		int ans = (int) 1e8;
		for (int i = 0; i < n; i++) { 
			int c, p;
			cin >> c >> p;
			if (c > k) {
				// if the temperature is greater then 'k', then
				// get the maximum value between the current temperature minus the minutes 
				// and the 'k' temperature
				c = max(c - m, k);
			} else if (c < k) {
				// if the temperature is greater then 'k', then
				// get the minum value between the current temperature plus the minutes 
				// and the 'k' temperature
				c = min(c + m, k);
			}
			// check if the temperature is within the range
			if (l <= c && c <= r) {
				ans = min(ans, p);
			}
		}
		cout << (ans > (int) 1e7 ? -1 : ans) << '\n';
	}
	return 0; 
}
