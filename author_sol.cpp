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
		// if 's' is within the range of 0 to 'n', then the pair that would give
		// the maximum absolute difference is 's' and '0' (because |s - 0| = s)
		// otherwise, calculate the difference of 's' and 'n' to find the other
		// number that will add up to 's' (if n - s = x, then x + n = s)
		if (s <= n) {
			// take {0, s}
			cout << s;
		} else {
			// take {s - n, n}
			cout << abs(2 * n - s);
		}
		cout << '\n';
	}
	return 0;
}
