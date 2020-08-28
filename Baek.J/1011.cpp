#include <iostream>
using namespace std;
// Fly me to the Alpha Centauri
int main() {
	long long T, x, y, cnt = 0; // T = 테스트 개수, x = 현위치, y = 목표 위치
	long long count, sum; // count = 결과값, sum = 현재 간 거리

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		count = 0;
		sum = 0;
		while (sum < y - x) {
			count += 2;
			sum += count;
		}
		if (y - x <= sum - (count / 2))
			count--;
		cout << count << endl;
	}

	return 0;
}
