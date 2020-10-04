#include <iostream>
using namespace std;
// 별 찍기 - 8
int main() {
	int n;
	cin >> n;

	for (int i = n - 1; i > -n; i--) {
		for (int j = n - abs(i); j > 0; j--) {
			cout << "*";
		}
		for (int k = 0; k < abs(i) * 2; k++) {
			cout << " ";
		}
		for (int l = n - abs(i); l > 0; l--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
