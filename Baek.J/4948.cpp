#include <iostream>
using namespace std;
//베르트랑 공준
int main() {
	int pm[(123456*2)+1] = {};
	int n, count;

	pm[0] = -1;
	pm[1] = -1;
	for (int i = 2; i <= 123456*2; i++) {
		if (pm[i] == 0) {
			for (int j = i * 2; j <= 123456 * 2; j += i) { //에라토스테네스 기법 i*2 랑 i*i랑 별 차이 없음
				pm[j] = -1;
			}
		}
	}

	while (1) {
		cin >> n;
		count = 0;
		if (n == 0)
			break;
		for (int i = n + 1; i <= n*2; i++) {
			if (pm[i] == 0)
				count++;
		}
		cout << count << "\n";
	}

	return 0;
}
