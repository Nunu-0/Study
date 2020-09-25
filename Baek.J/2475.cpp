#include <iostream>
using namespace std;
// 검증수
int main() {
	int num[6] = {0};

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		num[5] += num[i] * num[i];
	}
	cout << num[5] % 10;

	return 0;
}
