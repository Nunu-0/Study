#include <iostream>
using namespace std;
//골드바흐의 추측
int main() {
	int pr[10001] = {};
	int T, n; //T = 테스트 수, n = 숫자,
	int s, b; //s = 작은 소수, b = 큰 소수

	pr[0] = -1;
	pr[1] = -1;
	for (int i = 2; i < 10001; i++) { //에라토스테네스의 기법 (소수 찾기)
		if (pr[i] == 0) {
			for (int j = i * 2; j < 10001; j += i)
				pr[j] = -1;
		}
	}

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		s = n / 2;
		b = n / 2;
		while (1) {
			if (pr[s] >= 0 && pr[b] >= 0)
				break;
			s--; //차이가 작은 두 소수는 대칭적으로 이루어져있다.
			b++;
		}
		cout << s << " " << b << endl;
	}

	return 0;
}
