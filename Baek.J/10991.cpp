#include <iostream>
using namespace std;
// 별 찍기 - 16
int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = i; k > 0; k--) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}
