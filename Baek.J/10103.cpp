#include <iostream>
using namespace std;
// 주사위 게임
int main() {
	int t, d1, d2, p1 = 100, p2 = 100;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> d1 >> d2;
		if (d1 < d2) {
			p1 -= d2;
		}
		else if (d1 > d2) {
			p2 -= d1;
		}
	}
	cout << p1 << endl << p2;

	return 0;
}
