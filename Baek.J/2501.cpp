#include <iostream>
#include <vector>
using namespace std;
// 약수 구하기
int main() {
	int n, k;
	cin >> n >> k;
	vector <int> divisor;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			divisor.push_back(i);
		}
	}

	if (divisor.size() < k) {
		cout << 0;
	}
	else {
		cout << divisor[k - 1];
	}

	return 0;
}
