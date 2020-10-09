#include <iostream>
using namespace std;
// 별 찍기 - 17
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n - i; j > 1; j--) {
			cout << " ";
		}
		for (int k = 0; k <= i * 2; k++) {
			if (i == 0) {
				cout << "*";
			}
			else if (i == n - 1) {
				cout << "*";
			}
			else if (k == 0) {
				cout << "*";
			}
			else if (k == i * 2) {
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}
