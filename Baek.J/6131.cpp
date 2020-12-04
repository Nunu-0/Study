#include <iostream>
using namespace std;
// 완전 제곱수
int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= 500; i++) {
		for (int j = i; j <= 500; j++) {
			if (j * j == i * i + n) {
				cnt++;
			}
		}
	}
	cout << cnt;

	return 0;
}
