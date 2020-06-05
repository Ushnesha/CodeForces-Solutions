#include<bits/stdc++.h>
using namespace std;

int main() {
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int k256 = min(k2, min(k5, k6));
	int ans = k256 * 256;
	k2 -= k256;
	k5 -= k256;
	k6 -= k256;
	int k32 = min(k3, k2);
	ans += k32 * 32;
	cout << ans;
	return 0;
}