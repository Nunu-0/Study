#include <iostream>
using namespace std;
// 별찍기 - 6;
int main() {
	int n;

	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int k = n - i; k > 0; k--) {
			cout << " ";
		}
		for (int j = i * 2; j > 1; j--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
