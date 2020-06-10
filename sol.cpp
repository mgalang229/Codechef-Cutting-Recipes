#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
	if(x == 0) {
		return y;
	}
	return gcd(y % x, x);
}
int findGCD(int a[], int n) {
	int r = a[0];
	for(int i = 1; i < n; ++i) {
		r = gcd(a[i], r);
		if(r == 1) {
			return 1;
		}
	}
	return r;
}
void decode() {
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int c = findGCD(a, n);
	for(int i = 0; i < n; ++i) {
		cout << a[i] / c << " ";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
