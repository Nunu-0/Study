#include <iostream>
using namespace std;
// 별 찍기 - 4
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i; j > 0; j--) {
			cout << " ";
		}
		for (int k = n - i; k > 0; k--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
