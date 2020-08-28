#include <iostream>
using namespace std;
//소수
int main() {
	int M, N, p, sum = 0; // M = 작은 수, N = 큰 수, p = 소수 최솟값, sum = 총 합
	int pm[10002] = {};//pm = 소수

	cin >> M >> N;
	for (int i = N; i >= M; i--) {
		pm[i] = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				pm[i] = -1;
				break;
			}
		}
		if (i == 1)
			pm[i] = -1;
	}
	for (int i = N; i >= M; i--) {
		if (pm[i] == 1) {
			sum += i; //총 합
			p = i; //최솟값
		}

	}

	if (sum == 0) // 최솟값이 없으면 -1 출력
		cout << "-1";
	else
		cout << sum << endl << p;

	return 0;
}
