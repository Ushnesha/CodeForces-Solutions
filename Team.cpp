#include<bits/stdc++.h>
using namespace std;
int submain() {
	int t, sum=0;
	cin >> t;
	while (t--) {
		int count = 0;
		int a, b, c;
		cin >> a >> b >> c;
		count = a + b + c;
		if (count >= 2) sum++;
	}
	cout << sum;
	return 0;
}