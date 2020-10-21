#include <iostream>
using namespace std;
// 과자
int main() {
	int K, N, M, Money;
	cin >> K >> N >> M;

	Money = K * N - M;
	if (Money <= 0) {
		cout << "0";
	}
	else {
		cout << Money;
	}

	return 0;
}
