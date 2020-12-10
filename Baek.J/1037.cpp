#include <iostream>
#include <algorithm>
using namespace std;
// 약수
int main() {
	int n;
	cin >> n;
	int* divisor = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> divisor[i];
	}
	sort(divisor, divisor + n);
	cout << divisor[0] * divisor[n - 1];

	return 0;
}
