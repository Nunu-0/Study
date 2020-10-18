#include <iostream>
using namespace std;
// 나는 요리사다
int main() {
	int list[6] = {};
	int n, num, max = -1;

	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> n;
			list[i] += n;
		}
		if (list[i] > max) {
			max = list[i];
			num = i;
		}
	}

	cout << num << " " << max;

	return 0;
}
