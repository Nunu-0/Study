#include <iostream>
using namespace std;
//소수 찾기
int main() {
	int N, n, p;

	cin >> N;
	p = N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		for (int j = 2; j < n; j++) {
			if (n % j == 0) {
				p--;
				break;
			}
		}
		if (n == 1)
			p--;
	}
	cout << p;

	return 0;
}
