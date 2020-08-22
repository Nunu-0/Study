#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = n - 1; j > abs(i - n + 1); j--) {
			cout << " ";
		}
		for (int k = 0; k < 2 * abs(i - n + 1) + 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
