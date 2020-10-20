#include <iostream>
using namespace std;
// 0 = not cute / 1 = cute
int main() {
	int n, result, one = 0, zero = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> result;
		if (result == 0) {
			zero++;
		}
		else if (result == 1) {
			one++;
		}
	}

	if (zero > one) {
		cout << "Junhee is not cute!";
	}
	else {
		cout << "Junhee is cute!";
	}

	return 0;
}
