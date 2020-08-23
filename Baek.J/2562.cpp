#include <iostream>
using namespace std;

int main() {
	int n, max = 0, count = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n;
		if (max < n) {
			max = n;
			count = i + 1;
		}
	}
	cout << max << endl << count;
	return 0;
}
