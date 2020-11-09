#include <iostream>
using namespace std;
// 점수계산
int main() {
	int t, ft, score = 0, sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> ft;
		if (ft == 1) {
			score++;
		}
		else {
			score = 0;
		}
		sum += score;
	}
	cout << sum;

	return 0;
}
