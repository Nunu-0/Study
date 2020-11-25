#include <iostream>
using namespace std;
// 스타후르츠
int main() {
	int n, t, c, p;
	cin >> n >> t >> c >> p;

	if (n % t == 0) {
		cout << (n / t - 1) * c * p;
	}
	else {
		cout << n / t * c * p;
	}
	return 0;
}
