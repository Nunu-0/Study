#include <iostream>
using namespace std;
// 별 찍기 - 15
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) { // 줄
		for (int j = n - i - 1; j > 0; j--) { //맨 앞 여백
			cout << " ";
		}
		cout << "*";
		for (int k = 2 * i - 1; k > 0; k--) {
			cout << " ";
		}
		if (i != 0) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
