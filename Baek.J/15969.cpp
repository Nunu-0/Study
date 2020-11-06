#include <iostream>
using namespace std;
// 행복 (100점)
int main() {
	int n, score, min = 1000, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score;
		if (score < min) {
			min = score;
		}
		if (score > max) {
			max = score;
		}
	}
	cout << max - min;

	return 0;
}
