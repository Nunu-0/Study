#include <iostream>
using namespace std;
// 별 찍기 - 14
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
