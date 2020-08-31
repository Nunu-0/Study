#include <iostream>
#include <cmath>
using namespace std;
//터렛
int main() {
	int T, d; // T = 테스트 개수, d = 1과 2의 거리
	int x1, y1, r1, x2, y2, r2;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = pow((x1 - x2), 2) + pow((y1 - y2), 2); // 1과 2의 거리, 제곱근을 쓰면 오차가 생김
		if (d == 0 && r1 == r2)
			cout << "-1\n";
		else if (d > pow(r1 + r2, 2) || d < pow(r1 - r2, 2))
			cout << "0\n";
		else if (d == pow(r1 + r2, 2) || d == pow(r1 - r2, 2))
			cout << "1\n";
		else
			cout << "2\n";
	}

	return 0;
}
