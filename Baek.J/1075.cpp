#include <iostream>
using namespace std;
// 나누기
int main() {
	int n, f;
	cin >> n >> f;

	n = n / 100 * 100;
	while (n % f != 0) {
		n++;
	}
	n = n % 100;

	if (n == 0) {
		cout << "00";
	}
	else if (n < 10) {
		cout << "0" << n;
	}
	else {
		cout << n;
	}

	return 0;
}
