#include <iostream>
using namespace std;
// 카드 게임
int main() {
	int n, sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		sum += n;
	}
	cout << sum;

	return 0;
}
