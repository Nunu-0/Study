#include <iostream>
using namespace std;
// 01타일
int tileCnt[1000001] = { 0 ,1, 2 };

int tile(int n) {
	for (int i = 3; i <= n; i++) {
		tileCnt[i] = (tileCnt[i - 1] + tileCnt[i - 2]) % 15746;
	}
	return tileCnt[n];
}

int main() {
	int n;

	cin >> n;
	cout << tile(n);

	return 0;
}
