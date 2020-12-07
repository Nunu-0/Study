#include <iostream>
using namespace std;
// 이항 계수 1
// (n k) = n! / (k! (n-k))!

int fact(int n) {
	int temp = 1;
	for (int i = 1; i <= n; i++) {
		temp *= i;
	}
	return temp;
}
int main() {
	int n, k;

	cin >> n >> k;
	cout << fact(n) / (fact(k) * fact((n - k)));

	return 0;
}
