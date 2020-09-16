#include <iostream>
using namespace std;
//피보나치 함수
int fib[41] = { 0, 1 };

void fibonacci(int n) {
	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T, n;

	cin >> T;
	fibonacci(41);
	for (int i = 0; i < T; i++) {
		cin >> n;
		if (n == 0) {
			cout << "1 0\n";
		}
		else {
			cout << fib[n - 1] << " " << fib[n] << "\n";
		}
	}

	return 0;
}
