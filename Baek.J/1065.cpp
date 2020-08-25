#include <iostream>
#include <vector>
using namespace std;

int func(int n) {
	int numc = 0, ari, ari2;
	int onen[100] = {};
	if (n < 100) { // 두 자리 수는 무조건 한수
		return 1;
	}
	else {
		while (n > 0) { //자리수 분리
			onen[numc] = n % 10;
			n /= 10;
			numc++;
		}

		for (int i = 0; i < numc - 2; i++) {//등차수열 확인
			ari = (onen[i] - onen[i + 1]);
			ari2 = (onen[i + 1] - onen[i + 2]);
			if (ari != ari2)
				return 0;
		}
		return 1;
	}

}

int main() {
	int n, result = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		result += func(i);
	}
	cout << result;
	return 0;
}
