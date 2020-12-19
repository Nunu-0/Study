#include <iostream>
using namespace std;
// 홀수일까 짝수일까
int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char num[62] = {};
		cin >> num;
		for (int j = 0; j < 62; j++) {
			if (num[j] == 0) {
				if (num[j - 1] % 2 == 0) {
					cout << "even" << endl;
				}
				else
					cout << "odd" << endl;
				break;
			}
		}
	}

	return 0;
}
