#include <iostream>
using namespace std;
// 링
int gcd(int a, int b) { // 최대공약수 (유클리드 호제법)
	int x, y, z;
	x = a;
	y = b;
	z = 1;

	while (z) {
		z = x % y;
		x = y;
		y = z;
	}

	return x;
}
/*
분모 = 첫번째 링 / 최대공약수
분자 = n번째 링 / 최대공약수
*/
int main() {
	int n, first, second;
	cin >> n >> first;

	for (int i = 1; i < n; i++) {
		cin >> second;
		int g = gcd(first, second);
		cout << first / g << "/" << second / g << endl;
	}

	return 0;
}
