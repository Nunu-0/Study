#include <iostream>
using namespace std;
// 별 찍기 - 5
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) { // 줄 수
		for (int j = n - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k < i * 2; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
