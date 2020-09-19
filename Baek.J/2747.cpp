#include <iostream>
using namespace std;
// 피보나치 수
int f[46] = { 0, 1 };

void fib() {
	for (int i = 2; i <= 45; i++)
		f[i] = f[i - 1] + f[i - 2];
}

int main() {
	int n;

	cin >> n;
	fib();
	cout << f[n];

	return 0;
}
