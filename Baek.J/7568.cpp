#include <iostream>
using namespace std;
// 덩치
int main() {
	int n;
	int p[51][3] = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i][0] >> p[i][1]; // 몸무게, 키 입력
	}

	for (int i = 0; i < n - 1; i++) { //덩치 비교
		for (int j = i + 1; j < n; j++) {
			if (p[i][0] < p[j][0] && p[i][1] < p[j][1])
				p[i][2]++;
			else if (p[i][0] > p[j][0] && p[i][1] > p[j][1])
				p[j][2]++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << p[i][2] + 1 << " ";
	}

	return 0;
}
