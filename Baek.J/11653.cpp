#include <iostream>
using namespace std;
// 소인수분해
int main() {
	int n;
	cin >> n;

	while (n >= 2) {
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				cout << i << endl;
				n /= i;
				break;
			}
		}
	}

	return 0;
}
