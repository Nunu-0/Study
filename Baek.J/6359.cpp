#include <iostream>
using namespace std;
// 수도 요금
int main() {
	int  a, b, c, d, p, price;

	cin >> a >> b >> c >> d >> p;
	if (p <= c) {
		price = b;
	}
	else {
		price = b + (p - c) * d;
	}
	if (price > p * a) {
		price = p * a;
	}
	cout << price;

	return 0;
}
