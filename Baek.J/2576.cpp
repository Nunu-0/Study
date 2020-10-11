#include <iostream>
using namespace std;
// 홀수
int main() {
	int n, sum = 0;
	int min = 101;

	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 1) {
			sum += n;
			if (min > n) {
				min = n;
			}
		}
	}
	if (min == 101) {
		cout << "-1";
	}
	else {
		cout << sum << endl << min;
	}

	return 0;
}
