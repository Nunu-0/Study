#include <iostream>
using namespace std;

int d(int n) {
	return (n + (n / 10000) + (n % 10000 / 1000) + (n % 1000 / 100) + (n % 100 / 10) + (n % 10));
}

int main() {
	int selfn[20000] = {0};
	for (int i = 1; i < 10001; i++) {
		selfn[d(i)]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (selfn[i] == 0) {
			cout << i << endl;
		}
	}
	return 0;
}
