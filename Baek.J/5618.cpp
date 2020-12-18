#include <iostream>
using namespace std;
// 공약수
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int n, cm, num[3] = {};
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cm = gcd(num[0], num[1]);
	if (n == 3) {
		cm = gcd(cm, num[2]);
	}

	for (int i = 1; i <= cm; i++) {
		if (cm % i == 0) {
			cout << i << endl;
		}
	}

	return 0;
}
