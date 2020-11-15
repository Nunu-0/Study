#include <iostream>
using namespace std;
// 오각형, 오각형, 오각형…
int main() {
	long long n, num;

	cin >> n;
	num = 1 + 4 * n + 3 * n * (n - 1) / 2;
	cout << num % 45678;

	return 0;
}
