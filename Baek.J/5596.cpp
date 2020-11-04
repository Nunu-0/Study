#include <iostream>
using namespace std;
// 시험 점수
int main() {
	int score, min = 0, man = 0;

	for (int i = 0; i < 8; i++) {
		cin >> score;
		if (i < 4) {
			min += score;
		}
		else {
			man += score;
		}
	}
	if (min >= man) {
		cout << min;
	}
	else {
		cout << man;
	}

	return 0;
}
