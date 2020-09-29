#include <iostream>
using namespace std;
// 별 찍기 - 3
int main() {
	int n;

	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
