#include <iostream>
using namespace std;
// 별 찍기 - 20
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				cout << "* ";
			}
			else
				cout << " *";
		}
		cout << endl;
	}

	return 0;
}
