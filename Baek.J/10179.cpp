#include <iostream>
using namespace std;
// 쿠폰
int main() {
	double n, price;
	cin >> n;
	cout << fixed;
	cout.precision(2);

	for (int i = 0; i < n; i++) {
		cin >> price;
		cout << "$" << price / 100 * 80 << endl;
	}

	return 0;
}
