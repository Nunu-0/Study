#include <iostream>
using namespace std;
// 짝수를 찾아라
int main() {
	int t, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		int min = 101, sum = 0;
		for (int j = 0; j < 7; j++) {
			cin >> n;
			if (n % 2 == 0) {
				sum += n;
				if (n < min) {
					min = n;
				}
			}
		}
		cout << sum << " " << min << endl;
	}

	return 0;
}
