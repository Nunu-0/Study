#include <iostream>
using namespace std;
// 피보나치 수2
int N;
long long fibo[91];

long long fib(int n) {
	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	return fibo[n];
}

int main() {
	cin >> N;
	fibo[0] = 0;
	fibo[1] = 1;
	cout << fib(N);
}
