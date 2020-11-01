#include <iostream>
using namespace std;
// 킹, 퀸, 룩, 비숍, 나이트, 폰
int main() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int num;

	for (int i = 0; i < 6; i++) {
		cin >> num;
		chess[i] -= num;
	}
	for (int j = 0; j < 6; j++) {
		cout << chess[j] << " ";
	}

	return 0;
}
