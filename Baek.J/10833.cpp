#include <iostream>
using namespace std;
// 사과
int main() {
	int t, s, a, sum = 0;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s >> a;
		sum += a % s;
	}
	cout << sum;

	return 0;
}
