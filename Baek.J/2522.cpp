#include <iostream>
using namespace std;
// 별 찍기 - 12
int main() {
	int n;
	cin >> n;

	for (int i = n - 1; i > -n; i--) {
		for (int j = abs(i); j >= 0 && j != 0; j--) {
			cout << " ";
		}
		for (int k = n - abs(i); k > 0; k--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
