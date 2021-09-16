#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, s;
		cin >> n >> s;
		int mx = INT_MIN;
		// we need to find t1 and t2 values such that the sum of t1 and t2 is equal to 's'
		// and its absolute difference is the maximum value that can be achieved
		for (int i = 0; i <= n; i++) {
			// t1 + t2 = s
			// t1 = s - t2
			// let diff = t1, t2 = i
			// diff = s - i
			int diff = abs(s - i);
			// find the maximum absolute difference
			if (diff >= 0 && diff <= n) {
				mx = max(mx, abs(diff - i));
			}
		}
		cout << mx << '\n';
	}
	return 0;
}
