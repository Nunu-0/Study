#include <iostream>
using namespace std;
// 줄 세우기
int main() {
	int n, num;
	int order[101] = {};

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num;
		for (int j = i; j > num; j--) {
			order[j] = order[j - 1];

		}
		order[num] = i;
	}

	for (int i = n - 1; i >= 0; i--) {
		cout << order[i] << " ";
	}

	return 0;
}
