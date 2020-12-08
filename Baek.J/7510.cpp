#include <iostream>
using namespace std;
// 고급 수학
int main() {
	int t, a, b, c;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> a >> b >> c;
		cout << "Scenario #" << i << ":" << endl;
		if (a * a == b * b + c * c || b * b == a * a + c * c
			|| c * c == a * a + b * b) {
			cout << "yes" << endl << endl;
		}
		else {
			cout << "no" << endl << endl;
		}
	}

	return 0;
}
