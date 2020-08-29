#include <iostream>
using namespace std;
//소수
int main() {
	int M, N; // M = 작은 수, N = 큰 수
	int pm[1000001] = {};//pm = 소수
	cin.tie(NULL);
	cout.tie(NULL); //cin과 cout의 속도향상을 위해

	cin >> M >> N;
	pm[1] = -1;
	for (int i = 2; i < N; i++) { //에라토스테네스의 체 (2부터 자신을 제외한 2의 배수를 모두 지우고 가장 작은수의 배수를 지우기 반복)
		if (pm[i] == 0) {
			for (int j = i * 2; j <= N; j += i) {
				pm[j] = -1;
			}
		}
	}
	for (int i = M; i <= N; i++) {
		if (pm[i] == 0)
			cout << i << "\n";
	}

	return 0;
}
